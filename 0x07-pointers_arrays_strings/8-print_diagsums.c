#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function prototype
 * Description: Prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: A pointer to the first element of the array
 * @size: The size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int x = 0;
	int y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		y += a[size - i - 1];
		a += size;
	}

	printf("%d, ", x);
	printf("%d\n", y);
}
