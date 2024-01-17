# Terminal
- Terminal library for basic terminal debugging

## Key features
- Compatible with `Microchip Studio IDE`
- ```begin()``` and ```end()``` functions to easily enable or disable the `Terminal`
- ```log()``` ```info()```,```warning()``` and ```error()``` debugging levels
- not yet configurable to enable/disable debugging levels (comming soon)

## Example code
```C
/* Dependencies */
#include "Terminal.h"

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
```

## Tested on
- `Microchip Studio IDE` and `PuTTY` with `ATmega328PB` @16MHz