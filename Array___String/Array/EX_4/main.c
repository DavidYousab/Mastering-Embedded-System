#include "stdio.h"

int main(){

	int i, no,lo, in, arr1[20];
	printf("enter the number of elements:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&no);

	for(i=0; i<no; i++){
		scanf("%d",& arr1[i]);
	}
	arr1[no+1]=0;
	for(i=0; i<no; i++){
		printf("%d  ",arr1[i]);
	}


	printf("\nEnter the number to be inserted:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&in);


	printf("\nEnter the location of the number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&lo);

	for(i=no; i>lo; i--)
	{
		arr1[i+1]=arr1[i];
	}

	arr1[lo]=in;

	for(i=0; i<no+1; i++)
	{
		printf("%d  ",arr1[i]);
	}


	return 0;
}
