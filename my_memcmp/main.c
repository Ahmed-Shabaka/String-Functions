#include "mod.h"

uint8 arr1[MAX_ARRAY_SIZE]="Ahmed Saad1";
uint8 arr2[MAX_ARRAY_SIZE]="Ahmed Saad2";
int main ()
{
	return_status_t ret;
	uint32 return_value;
	
	return_value= my_memcmp(arr1,arr2,30,&ret);
	printf("========================\n");
	if(R_OK==ret)
	{
		printf("Return_Value= %i \n",return_value);
		printf("Return_Error_Status= %i \n",ret);
	}
	else
	{
		printf("ERROR! \n");
	}
	
	
	return 0;
}
