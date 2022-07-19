#include "stdio.h"

void Rev_sentance();

int main ()
{
	printf("Enter a sentance :");
	fflush(stdin); fflush(stdout);
	Rev_sentance();
	return 0;
}

void Rev_sentance()
{
	char c;
	scanf("%c",&c);
	if(c!= '\n' )
	{

	Rev_sentance();
	printf("%c",c);
	}
}


