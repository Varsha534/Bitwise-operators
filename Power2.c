#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int num;
	printf("Enter any number \n");
	scanf("%d", &num);
	
	if((num & (num-1)) == 0)
	{
		printf("Number is a power of 2");
	}
	else
	{
		printf("Number is not a power of 2");
	}
	
	return 0;
}
