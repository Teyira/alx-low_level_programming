#include <stdio.h>

/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
*/

int main(void)
{
	int a = 0, b = 1, next = 0;
	int even_sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			even_sum += next;
	}
	printf("%i\n", even_sum);
	return (0);
}
