#include "stdio.h"

void main()
{
	char A;
	printf("Enter an alphabet:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&A);
	int c=(int)A;

	if(97 <=c && c<= 122 || 65 <=c && c <=90)
	{
		printf("%c is Alphabit ",A);
	}
	else
		printf("%c is not Alphabit",A);
}
