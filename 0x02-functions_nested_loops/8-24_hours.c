#include "main.h"

/**
*jack_bauer - Function to print hours and minutes
*/
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours <= 24; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
