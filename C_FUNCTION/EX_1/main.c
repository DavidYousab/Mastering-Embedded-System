#include "stdio.h"

int Cheack_The_Num(int x);

int main()
{
	int i;
	int num_1,num_2;
	printf("please enter two number ( entervals ):");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num_1,&num_2);
	printf("prime numbers between %d and %d is ", num_1 , num_2);
	for(i=num_1; i<=num_2; i++)
	{
		if (Cheack_The_Num(i))
		printf("%d  ",i);
	}


return 0;
}

int Cheack_The_Num(int x)
{
	int i=0,r=0;
	for (i=2; i<x;i++)
	{
		if ((x%i)!=0)
			r=1;
		break;
	}
	return r;
}
