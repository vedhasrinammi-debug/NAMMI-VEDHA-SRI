#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks");
	scanf("%d",&marks);
	if(marks>90)
	{
		printf("A grade");
	}
	else if(marks>80)
	{
		printf("B grade");
	}
	else if(marks>50)
	{
		printf("C grade");
	}
	else if (marks<=50)
	{
		printf("D grade");
	}
	return 0;
}
