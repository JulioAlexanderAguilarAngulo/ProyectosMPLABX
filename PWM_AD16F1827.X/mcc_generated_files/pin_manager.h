/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB® Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.10
        Device            :  PIC16F1827
        Version           :  1.01
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set control aliases
#define control_TRIS               TRISA0
#define control_LAT                LATA0
#define control_PORT               RA0
#define control_ANS                ANSA0
#define control_SetHigh()    do { LATA0 = 1; } while(0)
#define control_SetLow()   do { LATA0 = 0; } while(0)
#define control_Toggle()   do { LATA0 = ~LATA0; } while(0)
#define control_GetValue()         RA0
#define control_SetDigitalInput()    do { TRISA0 = 1; } while(0)
#define control_SetDigitalOutput()   do { TRISA0 = 0; } while(0)

#define control_SetAnalogMode()   do { ANSA0 = 1; } while(0)
#define control_SetDigitalMode()   do { ANSA0 = 0; } while(0)
// get/set CCP3 aliases
#define CCP3_TRIS               TRISA3
#define CCP3_LAT                LATA3
#define CCP3_PORT               RA3
#define CCP3_ANS                ANSA3
#define CCP3_SetHigh()    do { LATA3 = 1; } while(0)
#define CCP3_SetLow()   do { LATA3 = 0; } while(0)
#define CCP3_Toggle()   do { LATA3 = ~LATA3; } while(0)
#define CCP3_GetValue()         RA3
#define CCP3_SetDigitalInput()    do { TRISA3 = 1; } while(0)
#define CCP3_SetDigitalOutput()   do { TRISA3 = 0; } while(0)

#define CCP3_SetAnalogMode()   do { ANSA3 = 1; } while(0)
#define CCP3_SetDigitalMode()   do { ANSA3 = 0; } while(0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
*/