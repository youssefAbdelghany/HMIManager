
#include "HMIManager.h"
#include "HMIManager_Cfg.h"

/*Number of HMI manager channels will be the same as number of HMI channels .. here will be the variable pointer values
 *  of any page in an  HMI group ... HMI_Cfg.c will have UART number used and frame header and pointer to their call back ...
 *   manager will have the VP values*/
const HMIManager_ConfigType HMIManager_ConfigParam[HMIManager_CHANNELS_NUMBER] =
{
 {
 0x05,0x003,0x0004,0x0100,0x00,0x001,0x02,0x500,0x06,0x0200,0x300
 }
};


