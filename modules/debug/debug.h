/**
 * @file
 * @author PanPaskuda PanPaskuda+N-Base@gmail.com
 *
 * @section LICENSE
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details at https://www.gnu.org/licenses/
 *
 * @section DESCRIPTION
 * module manage collecting and sending logs to uC peripheral 

 @startuml

 package "Debug module" {

    package "Module layer" {
    [Debug]
    }

    Debug_Init -- [Debug]
    Debug_Send --[Debug]
    Debug_Send_noint -- [Debug]
    Debug_Wait_for_debug -- [Debug]
    [Debug] --> Uart_Init
    [Debug] --> Uart_Put_char

    package "Drivers layer" {
    [Uart]
    }

    Uart_Init --[Uart]
    Uart_Put_char --[Uart]
 }

 @enduml
*/

/**
 * Initialize module
 */
void Debug_Init(void);

/**
 * Send one log
 * @param string_to_send pointer to string to send
 */
void Debug_Send(const char * string_to_send);

/**
 * Send one log without using interrupts and waits for end of a transmission
 * @param string_to_send pointer to string to send
 * @note if no_int version is not really needed use Debug_Send() instead
 */
void Debug_Send_noint(const char * string_to_send);

/**
 * Wait for send all logs from buffer
 */
void Debug_Wait_for_debug(void);
