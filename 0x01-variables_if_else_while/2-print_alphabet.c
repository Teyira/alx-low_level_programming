#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: A program that prints the alphabet in lowercase
 * Return: 0
*/
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}

	putchar('\n');
	return (0);
}
