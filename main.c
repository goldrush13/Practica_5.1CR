#include "lib/include.h"
//main.c -> Aqui solo llamo a la función

//Experimento 1
/*Usando el modulo 0 de PWM con una frecuencia de reloj del sistema de 50,000,000 Hz
 * junto con el generador 1  habilitar alguno de los pwm's asociados y obtener un PWM
 * cuya frecuencia sea de 10KHz
 */
int main(void)
{

    Configurar_PLL(F50MHZ);           // Confiuracion de velocidad de reloj
    Configura_Reg_PWM0(8);      // Configuro a 10khz el pwm (lo mando llamar)
   
    while(1)
    {
        
    }

}
