#include "mod.h"


void *my_memcpy(void *const dest , const void *const source , const uint32 n, return_status_t *const ret)
{
	
	if(NULL==dest || NULL==source || NULL==ret )
	{
		*ret=R_NOK;
	}
	else
	{
		*ret=R_OK;
		uint32 counter=0;
		
		for(counter=0;counter<n;counter++)
		{
			((uint8 *)dest)[counter]=((uint8 *)source)[counter];
		}
	}
	
	return dest;
}