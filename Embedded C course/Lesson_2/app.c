#include "types.h"
#include "uart.h"
uchar8_t str[]="Learn in depth : Islam";
void main(void)
{
	UART_send_string(str);
}