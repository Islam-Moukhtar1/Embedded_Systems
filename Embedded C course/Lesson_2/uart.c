#include "uart.h"
#include "types.h"
#define UART0DR *((vuint32_t*)((vuint32_t*)(0x101f1000)))
void UART_send_string(uchar8_t* p_tx_str)
{
	while(*p_tx_str != 0)
	{
		UART0DR=(uint32_t)(*p_tx_str);
		p_tx_str++;
	}
}