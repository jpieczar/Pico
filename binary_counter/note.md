Install minicom (or some other serial monitor software).

To run minicom:
`minicom -b 115200 -o -D /dev/ttyACM0`
<pre>
	-b Specify the baud rate
		115200 is specified as it usually is the fastest rate
		at which a microcontroller will transmit data.
	-o Skips initialisation
	-D Specify the device
</pre>
Minicom may take a short while (5 - 10 seconds) to start before you can use it.

To exit minicom:
`Ctrl + a`
`x`
Then follow this by hitting enter/return.
