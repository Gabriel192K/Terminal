/*
 * Terminal - Demo.cpp
 *
 * Created: 1/8/2024 8:15:59 AM
 * Author : rotes
 */ 

/* Dependencies */
#include "Terminal\Terminal.h"

/* Variables */
Terminal terminal(&USART);

int main(void)
{
    terminal.begin(115200);
    terminal.log("This is a log\n");
    terminal.info("This is a info\n");
    terminal.warning("This is a warning\n");
    terminal.error("This is a error\n");
    while (1) 
    {
    }
}

