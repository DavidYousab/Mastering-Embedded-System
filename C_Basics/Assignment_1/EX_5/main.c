#include "stdio.h"

void main()
{
	char i;
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c", & i);
	printf("\nASCII value of %c = %d",i,i);
}
