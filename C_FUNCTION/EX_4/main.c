#include "stdio.h"

int power(int x, int y);

int main()
{
	int base,pow,res;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&pow);

	res=power(base,pow);

	printf("%d^%d=%d",base,pow,res);

	return 0;
}

int power(int x, int y)
{
	static int result=1;
	result=result*x;
	y-=1;
	if(y)
	power(x,y);

	return result;
}
