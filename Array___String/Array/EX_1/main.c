#include "stdio.h"

int main()
{
	int i,j;
	float arr1[2][2],arr2[2][2],sum[2][2];

	printf("Enter the elements of the 1st matrix\n");
	fflush(stdin);fflush(stdout);

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}
	}

	printf("Enter the elements of the 2st matrix\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
			printf("Enter b[%d][%d]:",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr2[i][j]);
		}
	}
	printf("Sum of matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%f",arr1[i][j]+arr2[i][j]);

		printf("\n");
	}

return 0;
}
