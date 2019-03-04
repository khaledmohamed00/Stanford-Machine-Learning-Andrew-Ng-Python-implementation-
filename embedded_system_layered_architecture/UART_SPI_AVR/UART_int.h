#ifndef UART_INT_H
#define UART_INT_H

//#define Baud_rate 9600
#define BAUD 9600
void uart_init(void);
void uart_send_char(unsigned char c);
unsigned char uart_receive_char(void);
void USART_SendString(char * string);
#endif  