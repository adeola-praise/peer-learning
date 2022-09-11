#include <stdio.h>

int main(void)
{
	char tens;
	char units;

	for (tens = 48; tens < 58; tens++)
	{
		for (units = tens + 1; units < 58; units++)
		{
			putchar(tens);
			putchar(units);
			if ((tens == 56) && (units == 57))
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
