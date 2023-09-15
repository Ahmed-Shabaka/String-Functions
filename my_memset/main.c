#include "mod.h"

uint8 arr[MAX_ARRAY_SIZE]="Ahmed Saad Shabaka";

int main ()
{
	return_status_t ret;
	
	printf("%s\n",arr);
	my_memset(arr,'*',5,&ret);
	printf("========================\n");
	if(R_OK==ret)
	{
		printf("%s\n",arr);
	}
	else
	{
		printf("ERROR! \n");
	}
	
	return 0;
}
