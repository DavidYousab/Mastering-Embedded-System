#include "stdio.h"

int Factorial(int x);

int main()
{
	int res ,num;
	printf("Enter a positive number: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	res=Factorial(num);

	printf("Factorial of %d: is %d",num,res);

	return 0;
}

int Factorial(int x)
{
	static int res=1;
	res=x*res;
	if(x>1)
		Factorial(x-1);
	else
		return res;

}
