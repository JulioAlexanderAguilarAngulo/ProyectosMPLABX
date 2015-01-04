/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB® Code Configurator

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.10
        Device            :  PIC16F1827
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.33
        MPLAB             :  MPLAB X 2.26
*/

/*
Copyright (c) 2013 - 2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*/

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    int conversion;
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        ADC_Initialize();
        ADC_StartConversion(AN);

        while(!ADC_IsConversionDone());
        conversion = ADC_GetConversionResult();

        // El valor entregado en la variable "conversion" es un entero
        // entre 0 y 1023, puesto que la conversion es a 10 bits,
        // Como el voltaje de referencia es la alimentación, es decir,
        // 5V, por lo tanto para saber a cuantos voltios equivale el valor
        // en "conversion" se realiza la siguiente operación:

        // 5 (voltaje referencia)/ 1023 (valor maximo a 10 bits) = 0,0049

        // De este modo al leer el valor en la variable "conversion" podremos saber
        // que voltaje estamos recibiendo por la entrada analoga.

        // En el siguiente codigo se verifica que valor se encuentra en la
        // entrada AN0 pin 17 del 16F1827 y escribe un dato, en este caso
        // un numero del 0 al 5 en el puerto B para mostrar en un display
        // de siete segmentos conectado a un BCD 7448.

        if(conversion < 171){
            PORTB = 0;
        }else if(conversion < 342){
            PORTB = 1;
        }else if(conversion < 513){
            PORTB = 2;
        }else if(conversion < 684){
            PORTB = 3;
        }else if(conversion < 855){
            PORTB = 4;
        }else if(conversion < 1024){
            PORTB = 5;
        }
    }
}
/**
 End of File
*/