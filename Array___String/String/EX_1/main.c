#include"stdio.h"

int main(){
	int i,freq=0;
	char text[100],ch;

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(text);

	printf("Enter a character to find its frequency : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	for(i=0; i<sizeof(text);i++)
	{
	if(text[i]==ch)
		freq++;
	}


	printf("frequency of %c is: %d ",ch,freq);

		return 0;

}
