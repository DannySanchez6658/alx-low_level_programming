#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array
 * @a: input
 * @n: input n elemets
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
