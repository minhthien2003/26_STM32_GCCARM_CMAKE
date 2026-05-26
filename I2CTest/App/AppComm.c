#include "AppComm.h"
#include "string.h"




typedef struct
{
    /* data */
    uint8_t *pbuf;
    uint8_t u8Size;
}UARTData;

#define DATA_COM_SIZE 64



uint8_t u8Buff[DATA_COM_SIZE] = {0};
UARTData UARTCOMM = 
{
    .pbuf = u8Buff,
    .u8Size = DATA_COM_SIZE
};



void test(void)
{
    uint8_t u8Idx = 0;
    static uint32_t u32Data[DATA_COM_SIZE]  = {0,};

    for (u8Idx = 0; u8Idx < DATA_COM_SIZE; u8Idx++)
    {
        UARTCOMM.pbuf[u8Idx] = u8Idx;
    }
    memcpy(u32Data, UARTCOMM.pbuf,DATA_COM_SIZE);
    
}
