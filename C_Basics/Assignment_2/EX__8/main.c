#include "stdio.h"

void main()
{
	char A; float num1,num2 ,sum;
	printf("Enter an operator (+,-,*,/): ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&A);

	printf("Enter 2 numbers");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);

	switch(A)
	{
	case '+':
	{
		sum=num1+num2;
		printf("%f",sum);
	}
			break;

	case '-':
	{
		sum=num1-num2;
		printf("%f",sum);
	}
			break;

	case '*':
	{
		sum=num1*num2;
		printf("%f",sum);
	}
			break;

	case '/':
	{
		sum=num1/num2;
		printf("%f",sum);
	}
		break;

	default:
		printf("No Match ");
		break;
	}

}
