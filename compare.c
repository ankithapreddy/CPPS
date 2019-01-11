#include<stdio.h>
int input(int *a,int *b)
{
	printf("Enter the values of a and b\n");
	scanf("%d%d",a,b);
}
int compute(int a, int b)
{
if(a<b)
{
	printf("a is the smallest\n");
	return a;
}
else
{
	printf("b is the smallest\n");
	return b;
}
}
int output(int x, int y, int z)
{
	printf("%d is smaller than %d and %d",z,x,y);
	return z;
}
int main()
{
        int x,y,z;
	input(&x,&y);
	z=compute(x,y);
	output(x,y,z);
	return x,y,z;
}
