#include "stdio.h"

int main()
{
	int x,y,sum;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	scanf("%d",&y);
	sum=x+y;
	printf("Sum %d",sum);
	return 0;
}
