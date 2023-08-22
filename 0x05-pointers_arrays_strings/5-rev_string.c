#include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer to s
 *
 * Return: void
 */
void rev_string(char *s)
{
        int n;

        for (n = -2; ; s--)
        {
                _putchar(*s[n]);
                n--;
        }

        _putchar('\n');
}
