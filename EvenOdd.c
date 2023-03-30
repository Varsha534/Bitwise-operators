#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int num, ans;
	printf("Enter any number \n");
	scanf("%d", &num);
	
	if((num & 1)== 1)
	{
		printf("%d is a odd number",num);
	}
	else 
	{
		printf("%d is a even number",num);
	}
	
	return 0;
}
