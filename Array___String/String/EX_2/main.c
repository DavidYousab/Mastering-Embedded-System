#include"stdio.h"

int main(){
	int i,len=0;
	char str[50];

	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	scanf("%s",str);

	for(i=0;str[i]!=0;i++)
		len++;

	printf("\nLenth of string: %d",len);

	return 0;
}
