#include <stdio.h>
/**
* main - entry point
*
* codes for printing all possible two two-digits
* in ascending order and seperated by comma followed by a space
*
* Return: 0
*/
int main(void)
{
	int x = 0, y;

	while (x <= 99)
	{
		y = x;
		while (y <= 99)
		{
			if (y != x)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);

				if (x != 98 || y != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++y;
		}
		++x;
	}
	putchar('\n');
	return (0);
}
