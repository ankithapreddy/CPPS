#include<stdio.h>
int input(int *a,int *b)
{
	printf("Enter the values of a and b:");
	scanf("%d%d",a,b);
}
int add(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
int output(int a,int b,int sum)
{
	printf("%d+%d=%d",a,b,sum);
}
int main()
{
	int x,y,z;
	input(&x,&y);
	z=x+y;
	output(x,y,z);
	return z;
}
