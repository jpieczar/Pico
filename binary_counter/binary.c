#include "pico/stdlib.h"

int main() {

	uint i = 5;
	uint num = 1;
	uint hold;
	uint keep;

	// Initialise pins 6 to 13.
	// uint is just unsigned int.
	while (i < 14)
	{
		gpio_init(i);
		gpio_set_dir(i, GPIO_OUT);
		i++;
	}

	while(1)
	{
		if (num == 256)
		{
			i = 5;
			num = 1;
			while (i < 14)
			{
				gpio_put(i, 0);
				i++;
			}
		}
		int hold = num;
		int keep = 6;
		while (hold > 0)
		{
			if (hold % 2)
				gpio_put(keep, 1);
			else
				gpio_put(keep, 0);
			hold /= 2;
			keep++;
		}
		num++;
		sleep_ms(250);

	}
	return (0);
}
