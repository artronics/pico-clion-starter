#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

// This is LED pin for pico. It does NOT work for pico W
const uint LEDPIN = 25;

int main() {
    stdio_init_all();

    gpio_init(LEDPIN);
    gpio_set_dir(LEDPIN, GPIO_OUT);

    while (1) {
        gpio_put(LEDPIN, 1);
        sleep_ms(500);
        gpio_put(LEDPIN, 0);
        puts("Hello, World!\n");
        sleep_ms(500);
    }
}