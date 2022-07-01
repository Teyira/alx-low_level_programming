#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible combinations
 * of single digit numbers
 * Return: 0
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(48 + digit);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');

		}
		digit++;
	}
	putchar('\n');
	return (0);
}
