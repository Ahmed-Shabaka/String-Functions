#include "mod.h"


uint32 my_memcmp(const void *const str1 , const void *const str2 , const uint32 n, return_status_t *ret)
{
	uint32 counter=0;
	uint32 return_value=0; /*Idicates that str1 = str2*/
	
	if(NULL==str1 || NULL==str2 || NULL==ret)
	{
		*ret=R_NOK;
	}
	else
	{
		*ret=R_OK;
		
		if(str1==str2)
		{
			return_value=0;
		}
		else
		{
			for(counter=0;counter<n;counter++)
			{
				if( ((uint8 *)str1)[counter] == ((uint8 *)str2)[counter] )
				{
					return_value=0;
				}
				else 
				{
					return_value= ( ((uint8 *)str1)[counter] )>( ((uint8 *)str2)[counter] )?( 1 ):( -1 );
					break;
				}
			}
		}
	}
	
	return return_value;
}