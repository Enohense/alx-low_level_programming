#include <stdio.h>
/**
* main - entry point
*
* codes for printing all possible combination of two two-digits
* in ascending order and separated by a comma followed by a space
*
* Return: 0
*/
int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (x > y)
			{
				putchar((x / 10) + '48');
				putchar((x % 10) + '48');
				putchar(' ');
				putchar((y / 10) + '48');
				putchar((y % 10) + '48');

				if (x != 98 && y != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
