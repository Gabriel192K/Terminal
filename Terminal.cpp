/* Dependencies */
#include "Terminal.h"

/*********************************************
Function: Terminal()
Purpose:  Constructor to Terminal class
Input:    Pointer to USART class
Return:   None
*********************************************/
Terminal::Terminal(__USART__* usart)
{
    this->usart = usart;
}

/*********************************************
Function: ~Terminal()
Purpose:  Destructor to Terminal class
Input:    None
Return:   None
*********************************************/
Terminal::~Terminal()
{
    this->usart = NULL;
}

/*********************************************
Function: begin()
Purpose:  Start Terminal class
Input:    Baudrate of the USART class
Return:   None
*********************************************/
void Terminal::begin(const uint32_t baudrate)
{
    this->usart->begin(baudrate);
}

/*********************************************
Function: end()
Purpose:  End Terminal class
Input:    None
Return:   None
*********************************************/
void Terminal::end(void)
{
    this->usart->end();
}

/*********************************************
Function: info()
Purpose:  Print an info over the terminal
Input:    Constant char array (from RAM)
Return:   None
*********************************************/
void Terminal::info(const char* s)
{
    this->usart->printP(PSTR("\e[32m"));
    this->usart->print(s);
    this->usart->printP(PSTR("\e[0m"));
}

/*********************************************
Function: warning()
Purpose:  Print a warning over the terminal
Input:    Constant char array (from RAM)
Return:   None
*********************************************/
void Terminal::warning(const char* s)
{
    this->usart->printP(PSTR("\e[33m"));
    this->usart->print(s);
    this->usart->printP(PSTR("\e[0m"));
}

/*********************************************
Function: error()
Purpose:  Print an error over the terminal
Input:    Constant char array (from RAM)
Return:   None
*********************************************/
void Terminal::error(const char* s)
{
    this->usart->printP(PSTR("\e[31m"));
    this->usart->print(s);
    this->usart->printP(PSTR("\e[0m"));
}

/*********************************************
Function: log()
Purpose:  Print a log over the terminal
Input:    Constant char
Return:   None
*********************************************/
void Terminal::log(const char c)
{
    this->usart->print(c);
}

/*********************************************
Function: log()
Purpose:  Print a log over the terminal
Input:    Constant char array (from RAM)
Return:   None
*********************************************/
void Terminal::log(const char* s)
{
    this->usart->print(s);
}

/*********************************************
Function: log()
Purpose:  Print a log over the terminal
Input:    Constant byte
Return:   None
*********************************************/
void Terminal::log(const uint8_t byte)
{
    this->usart->print(byte);
}
