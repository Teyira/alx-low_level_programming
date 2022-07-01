#include <stdio.h>
/**
 * main - main block
 * Description: Prints the alphabet in lowercase, followed by a new line.
 * Return: 0
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar('\n');
	return (0);
}
