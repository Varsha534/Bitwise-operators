#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int num1, num2, ans;
	printf("Enter 1st number \n");
	scanf("%d", &num1);
	
	printf("Enter 1st number \n");
	scanf("%d", &num2);
	
	ans= num1 & num2;
	
	printf("%d AND %d is %d",num1,num2,ans);
	
	return 0;
}
