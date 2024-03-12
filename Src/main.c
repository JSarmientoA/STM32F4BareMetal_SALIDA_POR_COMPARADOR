#include <stdint.h>
#include <stdio.h> // Para poder usar printf()
#include "stm32f4xx.h"
#include "uart.h"
#include "adc.h"
#include "systick.h"
#include "timer.h"
/*Este programa conecta el canal 1 del tima 2 al pin 5 del purto e intercambia su valor
 * entre 1 y 0 (0v-3.3v). Al conectar el timer directamente al Pin del puero, se requiere configurar
 * el puerto GPIOx*/

int main(void){

	confit_GPIOA5();
	tim2_modo_comparacion();

	while(1){

	}
}
