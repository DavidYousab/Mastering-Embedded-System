#include "stdio.h"

int main()
{
	int i,n;
	float sum=0,avr;
	float arr1[100];

	printf("Enter the number of data:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n; i++)
	{
		printf("Enter number:");
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr1[i]);
	}

	for(i=0;i<n; i++)
	{
		sum=sum+arr1[i];
	}

	avr=sum/n;

	printf("Average = %0.2f", avr);
	return 0;
}
