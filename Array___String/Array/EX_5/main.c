#include "stdio.h"

int main(){
	int i, no,num_ser , arr1[20];
		printf("enter the number of elements:");
		fflush(stdin);fflush(stdout);
		scanf("%d",&no);

		for(i=0; i<no; i++){
			scanf("%d",& arr1[i]);
		}

		for(i=0; i<no; i++){
			printf("%d  ",arr1[i]);
		}


		printf("\nEnter the number to be searched for:");
		fflush(stdin);fflush(stdout);
		scanf("%d",&num_ser);

		for(i=0; i<no; i++)
		{
		if (num_ser==arr1[i])
			break;
		}

		printf("Number found at location=%d ",i+1);
	return 0;
}
