#include "mod.h"

uint8 arr1[MAX_ARRAY_SIZE]="Ahmed Saad Shabaka";
uint8 arr2[MAX_ARRAY_SIZE]="12345678910";
int main ()
{
	return_status_t ret;
	
	printf("arr1= %s\n",arr1);
	printf("arr2= %s\n",arr2);
	my_memcpy(arr2,arr1,5,&ret);
	printf("========================\n");
	if(R_OK==ret)
	{
		printf("arr1= %s\n",arr1);
		printf("arr2= %s\n",arr2);
	}
	else
	{
		printf("ERROR! \n");
	}
	
	return 0;
}
