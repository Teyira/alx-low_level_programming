#include <stdio.h>
#include <stdlib.h>

/**
 * main - print first 98 Fibonacci numbers without using long long, malloc,
 * pointers, array/tables, or structures
 * Return: 0
*/

int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next_fib = 0;

	while (i < 99)
	{
		next_fib = a + b;
		a = b;
		b = next_fib;
		printf("%lu", next_fib);

		if (i < 98)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
