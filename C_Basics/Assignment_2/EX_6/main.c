#include "stdio.h"

void main()
{

	int n,i,sum=0;
	printf("Enter  a number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for(i=0; i<=n;i++)
		sum +=i;

	printf("%d",sum);

}
