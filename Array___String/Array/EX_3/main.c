#include "stdio.h"

int main()
{
	int i,j,r,c;
	float arr[20][20];

	printf("Enter the rows and colums of the matrix:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&r,&c);
	printf("Enter the the elements of the matrix:\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the elements [%d][%d]:",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&arr[i][j]);
		}
	}
	printf("\n the entered matrix:\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%0.2f  ",arr[i][j]);

		}
		printf("\n");
	}
	printf("\n the transpose of matrix:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%0.2f  ",arr[i][j]);

		}
		printf("\n");
	}
	return 0;
}
