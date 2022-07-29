#include "main.h"
#include <stlib.h>

/**
 * array_range - create array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
*/

int *array_range(int min, int max)
{
int *m;
int i;

if (min > max)
	return (NULL);

m = malloc((max - min + 1) * sizeof(int));

if (m == 0)
	return (NULL);


for (i = 0; min + i <= max; i++)
	m[i] = min + i;

return (m);
}
