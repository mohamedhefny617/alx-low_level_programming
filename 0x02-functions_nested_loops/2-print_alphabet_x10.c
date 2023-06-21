#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase, with new line.
 *
 * Description: 'puts program'
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int counter = 0;
char charC;

while (counter++ <= 9)
{
for (charC = 'a'; charC <= 'z'; charC++)
_putchar(charC);
_putchar('\n');
}

}

