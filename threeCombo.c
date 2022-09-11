#include <stdio.h>

int main(void)
{
	char hundreds;
	char tens;
	char units;

	for (hundreds = 48; hundreds < 58; hundreds++)
	{
		for (tens = hundreds + 1; tens < 58; tens++)
		{
			for (units = tens + 1; units < 58; units++)
			{
				putchar(hundreds);
				putchar(tens);
				putchar(units);

				if ((hundreds == 55) && (tens == 56) && (units == 57))
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
	return (0);
}
