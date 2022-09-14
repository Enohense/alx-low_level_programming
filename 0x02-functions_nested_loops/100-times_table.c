#include "main.h"

/**
* time_table - Print the n times table, starting with 0.
*
* Return: 0
*/
void print_times_table(int n)
{
	int n, mult, prod;

	for (n < 0 || n > 15; n++)
	{
		_putchar('0');

		for (mult = 1; mult <= 15; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * mult;

			if (prod > 15)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
