#include<stdio.h>
int main()
{
	int a,b,temp;
	a=11;
	b=99;
	printf("values before swapping-\n a=%d,b=%d \n\n",a,b);
	temp =a;
	a =b;
	b =temp;
	printf("values after swapping-\n a=%d,b=%d\n",a,b);
}
