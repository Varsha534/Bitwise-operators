#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int num, count1=0;
	
	printf("Enter any number \n");
	scanf("%d", &num);
	
	while(num != 0)
	{
		if ((num & 1) == 1)
		{
			count1++;
		}
		num = num >> 1;
	}
	
	printf("Number of 1s is %d", count1);
	
	return 0;
}
