#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 *
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		while (j < n)
		{
			int num = i * j;
			printf("%d", num);
			j++;
		}
		printf("\n");
		i++;
	}
}
