#include<stdio.h>
int main()
{
	int a[3][3],T[3][3],i,j,r,c;
	printf("enter rows and columns of the matrix A");
	scanf("%d%d",&r,&c);
	printf("enter the element");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			T[i][j]=a[j][i];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",T[i][j]);
		}
		printf("\n");
	}
	return 0;
}
