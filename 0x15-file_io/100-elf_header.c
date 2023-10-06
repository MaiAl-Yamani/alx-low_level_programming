#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - print ELF magic
 * @h: ELF header struct
 *
 * Return: void
 */
void print_magic(Elf64_Ehdr h)
{
	int itr;

	printf("  Magic:   ");
	for (itr = 0; itr < EI_NIDENT; itr++)
		printf("%2.2x%s", h.e_ident[itr], itr == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * print_class - print class (ELF)
 * @h: ELF header struct
 * Return: void
 */
void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASSNONE:
			printf("Invalid class");
		break;
	}
	printf("\n");
}
/**
 * print_data - print data (ELF)
 * @h: ELF header struct
 * Return: void
 */
void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATANONE:
			printf("Invalid data encoding");
		break;
	}
	printf("\n");
}
/**
 * print_version - print version (ELF)
 * @h: ELF header struct
 * Return: void
 */
void print_version(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}
/**
 * print_osabi - prints osabi (ELF)
 * @h: ELF header struct
 */
void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Sun Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			print_osabi_more(h);
			break;
	}
	printf("\n");
}
/**
 * print_osabi_more - prints more osabi (ELF)
 * @h: ELF header struct
 */
void print_osabi_more(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}
/**
 * print_abiversion - prints ABI version (ELF)
 * @h: ELF header struct
 */
void print_abiversion(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
			h.e_ident[EI_ABIVERSION]);
}
/**
 * print_type - prints type (ELF)
 * @h: ELF header struct
 */
void print_type(Elf64_Ehdr h)
{
	char *ptr = (char *)&h.e_type;
	int n = 0;

	printf("  Type:                              ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		n = 1;
	switch (ptr[n])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", ptr[n]);
		break;
	}
	printf("\n");
}
/**
 * print_entry - prints entry address (ELF)
 * @h: ELF header struct
 */
void print_entry(Elf64_Ehdr h)
{
	int itr = 0, len = 0;
	unsigned char *ptr = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		itr = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[itr])
			itr--;
		printf("%x", ptr[itr--]);
		for (; itr >= 0; itr--)
			printf("%02x", ptr[itr]);
		printf("\n");
	}
	else
	{
		itr = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[itr])
			itr++;
		printf("%x", ptr[itr++]);
		for (; itr <= len; itr++)
			printf("%02x", ptr[itr]);
		printf("\n");
	}
}
/**
 * main - program that displays the info contained in the ELF header
 * @ac: command line arguments count
 * @av: command line arguments values
 *
 * Return: 1 on success 0 on failure
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr h;
	ssize_t byt;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	byt = read(fd, &h, sizeof(h));
	if (byt < 1 || byt != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
			h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);
	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	print_abiversion(h);
	print_type(h);
	print_entry(h);
	if (close(fd))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd), exit(98);
	return (EXIT_SUCCESS);
}
