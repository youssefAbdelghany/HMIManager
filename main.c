
#include "Stdint.h"
#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "UART.h"
#include "UART_Cfg.h"
#include "HMI.h"
#include "HMI_Cfg.h"
#include "M4MemMap.h"
#include "HMIManager.h"
#include "HMIManager_Cfg.h"


extern uint8_t Music_Satus_Flag,Engine_Satus_Flag;
void main(void)
{
//uint8_t ARR[]="01111709622";
    uint32_t i;
    GPIO_Init();
    UART_Init();
    EN_INT(61); //UART5
    HMI_Init(0);
    //HMI_GetVersion(0);
    //HMI_SelectPicture(0,0x0003);
    //HMI_GetPictureID(0);
    //HMI_SetDataVariable(0,0x0010,500);
    //HMI_SetText(0,0x0050,"Hossam Hassan Joe");

    Manager_Init();
    HMI_Managing_Function();

    for(i=0;i<=50000;i++);
    for(i=0;i<=50000;i++);

    Manager_Self_Test(0);

    HMI_Managing_Function();

    for(i=0;i<=50000;i++);
    for(i=0;i<=50000;i++);

    /************/
    for(i=0;i<=50000;i++);
    for(i=0;i<=50000;i++);

    Music_Status_Display(0,1);


    HMI_Managing_Function();
    /***************/
    /************/
     for(i=0;i<=50000;i++);
    for(i=0;i<=50000;i++);
    Engine_Status_Display(0, 1);
    HMI_Managing_Function();
    /***************/
    /*for(i=0;i<=50000;i++);
    for(i=0;i<=50000;i++);
    Incoming_Call_Display(0, ARR);

    HMI_Managing_Function();*/
    /*****************************/
    /***************/
   /* for(i=0;i<=50000;i++);
    for(i=0;i<=50000;i++);
    BTH_Status_Display(0,0);

    HMI_Managing_Function();*/
    /****************************/




    HMI_Managing_Function();

    while(1)
    {
        for(i=0;i<=50000;i++);
        for(i=0;i<=50000;i++);
        HMI_Managing_Function();

    }

}
