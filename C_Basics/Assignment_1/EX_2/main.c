#include "stdio.h"

void main()
{
	int i;
	printf("Enter a integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d", & i);
	printf("\nYou entered: %d",i);
}
