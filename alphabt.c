#include <stdio.h>

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch == 'q') || (ch == 'e'))
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
}
