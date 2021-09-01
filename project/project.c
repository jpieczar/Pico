#include "pico/stdlib.h"

int main()
{
	const uint LED = PICO_DEFAULT_LED_PIN; // GPIO 25

	gpio_init(LED);
	gpio_set_dir(LED, GPIO_OUT);

	while (1)
	{
		gpio_put(LED, 1);
		sleep_ms(1000);
		gpio_put(LED, 0);
		sleep_ms(1000);
	}
	return (0);
}
