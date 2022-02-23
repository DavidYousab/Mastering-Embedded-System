#include "stdio.h"

void main()
{
	float num1;
	printf("Enter Number:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num1);

	if(num1>0)
	{
		printf("%f is Positive",num1);
	}

	else if(num1<0)
		{
			printf("%f is negative",num1);
		}
	else
		{
			printf("%f is zero",num1);
		}
}
