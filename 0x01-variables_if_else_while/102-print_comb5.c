#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int t;
	int o;

	for (x = '0'; x <= '9'; x++) /*print x two digit combo*/
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (t = x; t <= '9'; t++) /*print second of pair*/
			{
				for (o = y; o <= '9'; o++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (!((x == '9' && y == '8') &&
					      (t == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
