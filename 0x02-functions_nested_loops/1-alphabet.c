#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * Description: 'puts program'
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char charC = 'a';

while (charC <= 'z')
{
_putchar (charC);
charC++;

}
_putchar ('\n');

}

