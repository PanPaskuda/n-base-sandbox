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
 * simple UART driver

 @startuml

 Uart_Init --[Uart]
 Uart_Put_char --[Uart]

 @enduml
*/


/**
 * Initialize uart
 */
void Uart_Init(void /*TODO put config params here */);

/**
 * Send one char via uart
 * @param symbol_to_send
 */
void Uart_Put_char(char symbol_to_send);

