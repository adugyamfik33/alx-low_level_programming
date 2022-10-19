#include "main.h"
void jack_bauer(void)
{
	int i, j, hour_1, hour_2, min_1, min_2;
	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			hour_1 = i / 10 + '0';

			hour_2 = i % 10 + '0';

			min_1 = j / 10 + '0';

			min_2 = j % 10 + '0';

			

			_putchar(hour_1);

			_putchar(hour_2);

			_putchar(':');

			_putchar(min_1);

			_putchar(min_2);

			_putchar('\n');

		}

	}

}
