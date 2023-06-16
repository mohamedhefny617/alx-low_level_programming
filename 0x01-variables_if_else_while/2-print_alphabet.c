#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: alphabet
 * Return: 0
 */
int main(void)
{
	char c = 97;

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
