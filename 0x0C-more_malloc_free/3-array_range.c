#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an array of integers ordered
 * from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: NULL - If min > max or the function fails.
 * Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array, y, z;

	if (min > max)
		return (NULL);
	z = max - min + 1;
	array = malloc(sizeof(int) * z);
	if (array == NULL)
		return (NULL);
	for (y = 0; y < z; y++)
		array[y] = min++;
	return (array);
}
