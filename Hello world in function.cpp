#include<stdio.h>
void myfunction();
void motherfunction();
int main()
{
	myfunction();
	return 0;
}
void myfunction()
{
	printf("hello world");
	motherfunction;
}
void motherfunction()
{
	printf("Hello world");
}
