#include"stdio.h"
#include"string.h"
int main(){
	int i,len;
	char str1[50],str2[50];

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	scanf("%s",str1);

	len=strlen(str1);


	for(i=0;i<len;i++)
	{
		str2[i]=str1[len-i-1];
	}
	str2[len]=0;

	printf("Revesed string is: %s",str2);
	return 0;
}
