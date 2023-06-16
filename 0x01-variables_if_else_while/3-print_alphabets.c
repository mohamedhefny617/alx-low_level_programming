#include <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet
 * Return: 0
 */
int main(void)
{
	char ch = 97;

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
