#define TXD0 0 //p0.0
#define RXD0 1 //p0.1
#define FOSC 12000000
#define CCLK (FOSC*5)
#define PCLK (CCLK/4)
#define BAUD 9600
#define LOADVAL  (PCLK/(16*BAUD))

//defines of UxLCR
#define WORD_LEN 3
#define DLAB_BIT 7
#define TEMT_BIT 6 //U0LCR.6
#define RDR_BIT  0

#define UART_INTS_EN 1
#define UART_TX_STATUS_LED 6//p0.6
#define UART_RX_STATUS_LED 7//p0.7

#define THRE_INT_EN_BIT 1 //U0IER.1
#define THRE_STATUS_BITS 1 //@from bit1,3bits 
#define RBR_INT_EN_BIT 0
