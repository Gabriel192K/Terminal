#ifndef __TERMINAL_H__
#define __TERMINAL_H__

/* Dependencies */
#include "../USART/USART.h"

class Terminal
{
    public:
        Terminal(__USART__* usart);
        ~Terminal();
        void begin   (const uint32_t baudrate);
        void end     (void);
        void info    (const char* s);
        void warning (const char* s);
        void error   (const char* s);
        void log     (const char c);
        void log     (const char* s);
        void log     (const uint8_t byte);
    private:
        __USART__* usart;
};

#endif
