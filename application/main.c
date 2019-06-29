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
 * main file of N-Base project
 
  @startuml

    package "Application layer" {
    [Application]
    }

    package "Module layer" {
    [Modules]
    [Sub-Modules]
    }

    package "Driver layer" {
    [Drivers]
    [Hardware Config]
    }

    note right of [Drivers]
    uC peripheral dependent
    end note

    note right of [Hardware Config]
    PCB dependent
    end note


    [Application] --> [Modules]
    [Modules] --> [Sub-Modules]
    [Sub-Modules] --> [Drivers]
    [Drivers] --> [Hardware Config]

  @enduml
*/

#include <stdbool.h>
#include "debug.h"


static void init_modules(void)
{
    Debug_Init();
}

/**
 * here we start
 */
void main(void)
{
    init_modules();

    while(true)
    {
        //brilliant code here
    }
}

