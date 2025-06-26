#include "esp_err.h"
#include "driver/gpio.h"
#include "driver/ledc.h"
#include "esp_log.h"

// definir pinos usados
#define INPUT_RIGHT_1 GPIO_NUM_15
#define INPUT_RIGHT_2 GPIO_NUM_13
#define INPUT_PWM GPIO_NUM_32

typedef enum {
    LEFT
    RIGHT
} motor_side_t

#define MOTOR_IMPUT_1 (MOTOR) MOTOR == (LEFT) ? INPUT_LEFT_1 : INPUTE_RIGHT_1
#define MOTOR_IMPUT_2 (MOTOR) MOTOR == (LEFT) ? INPUT_LEFT_2 : INPUTE_RIGHT_2
#define MOTOR_IMPUT_1 (MOTOR) MOTOR == (LEFT) ? : LEDC_CHANNEL_LEFT : LEDC_CHANNEL_RIGHT

// PWM
#define LEDC_TIMER LEDC_TIMER_0
#define LEDC_MODE LEDC_LOW_SPEED_MODE
#define LEDC_CHANNEL LEDC_CHANNEL_0
#define LEDC_DUTY_RES LEDC_TIMER_8_BIT
#define LEDC_FREQUENCY (5000)


void init_gpio ()

void init_pwm ()
