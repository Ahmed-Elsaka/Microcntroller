/*
 * SWI_prog.c
 *
 *  Created on: Feb 7, 2019
 *      Author: Killua
 */
#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "DIO_interface.h"
#include "SWI_interface.h"
#include "SWI_private.h"
#include "SWI_config.h"
#include "LED_interface.h"
#include <util/delay.h>


u8 SWI_u8GetSwitchState(u8 Copy_u8SwiNb ,u8 * Copy_pu8SwitchState){

	u8 local_ErrorState = ERROR_OK;

	u8 Local_SwitchState ; ;
	  if(Copy_u8SwiNb > SWI_u8_NUM_OF_SWIS || Copy_u8SwiNb < ARRAY_START_INDEX ){
	    local_ErrorState = ERROR_NOK;
	  }else {
	    switch(SWI_Au8SwitchType[Copy_u8SwiNb -ARRAY_START_INDEX]){
	      case SWI_u8_PULL_UP :
	    	  DIO_u8GetPinValue(SWI_Au8SwitchChannels[Copy_u8SwiNb -ARRAY_START_INDEX], &Local_SwitchState);
	    	  /*
	    	  if(Local_SwitchState ==1 ){
					*Copy_pu8SwitchState = 0;
			  }else{
				  *Copy_pu8SwitchState = 1;
			  }
			*/
	    	  *Copy_pu8SwitchState = Local_SwitchState;



	             break;
	      case SWI_u8_PULL_DOWN :
	    	  DIO_u8GetPinValue(SWI_Au8SwitchChannels[Copy_u8SwiNb -ARRAY_START_INDEX], &Local_SwitchState);

	    	  if(Local_SwitchState ==SWI_PRESSED ){
	    	  	    *Copy_pu8SwitchState = SWI_PRESSED;
	    	  }else{
	    		  *Copy_pu8SwitchState = SWI_RELEASED;
	    	  }
	         break;
	       default :
	        local_ErrorState = ERROR_NOK;
	    }

	  }



	  return local_ErrorState;
}
