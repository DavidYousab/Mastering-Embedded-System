#include "stdio.h"

void main()
{
	int num,i,sum=0;
	printf("Enter Number:");
	fflush(stdin); fflush(stdout);
	scanf("%D",&num);

	if(num>0)
	{
		for(i=0; i<=num;i++)
			sum +=i;
	}

	else if(num<0)
	{
		printf("Error!!! Factorial of negative number dose not exist");
	}
	else
	{
		sum=1;
	}
	if(sum>0)
	printf("Factorial= %d ",sum);
}
