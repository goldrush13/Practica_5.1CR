#include "lib/include.h"
//main.c -> Aqui solo llamo a la función

//Experimento 1
/*Usando el modulo 0 de PWM con una frecuencia de reloj del sistema de 50,000,000 Hz
 * junto con el generador 1  habilitar alguno de los pwm's asociados y obtener un PWM
 * cuya frecuencia sea de 10KHz
 */
int main(void)
{

    uint16_t Result[2];
    uint16_t duty[2];
    Configurar_PLL();  //Confiuracion de velocidad de reloj
    Configura_Reg_ADC0();
    Configurar_UART0();
    Configura_Reg_PWM1(10000);//Configuro a 10khz el pwm
    while(1)
    {
        ADC0_InSeq2(Result,duty); //llamada a la conversion por procesador
        PWM0->_1_CMPB = duty[0];
        PWM0->_1_CMPA = duty[1];
        PWM0->_0_CMPA = 15000;
        
    }

}
