#include <freertos/FreeRTOS.h>
#include "freertos/task.h"
#include "driver/gpio.h"

#define PINO_LED GPIO_NUM_2


void app_main() {
    // Configurar o GPIO como saída
    gpio_set_direction(PINO_LED, GPIO_MODE_OUTPUT);

    while (1) {
        // Ligar o LED
        gpio_set_level(PINO_LED, 1);
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Espera 500ms

        // Desligar o LED
        gpio_set_level(PINO_LED, 0);
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Espera 500ms
    }
}
