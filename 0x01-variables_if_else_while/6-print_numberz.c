#include <stdio.h>

/**
 * main - print all single digi in base 10
 * Return: Always o
 */
int main(void)
{
	int __C num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar("\n");

	return (0);
}
