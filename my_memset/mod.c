#include "mod.h"


void *my_memset(void *const dest , const uint8 value , const uint32 n, return_status_t *const ret)
{
	
	if(NULL==dest || NULL==ret)
	{
		*ret=R_NOK;
	}
	else
	{
		*ret=R_OK;
		uint32 counter=0;
		
		for(counter=0;counter<n;counter++)
		{
			((char *)dest)[counter]=value;
		}
	}
	
	return dest;
}