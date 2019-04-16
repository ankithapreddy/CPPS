#include<stdio.h>
#include<math.h>
struct polynomial{
	int degree;
	float coefficient;
	float x;
};
void input1(int *n,int *x)
{
	printf("Enter the order of the polynomial\n");
	scanf("%d",n);
	printf("Enter the value of the vairable x\n");
	scanf("%d",x);
}
void input2(int n,struct polynomial p[])
{
	int i;
	printf("Enter the coefficients of the variable\n");
	for(i=0;i<n;i++)
	scanf("%d",&p[i].coefficient);
}
/*int power(int n,struct polynomial variable,struct polynomial p[])
{
	int x,i;
	
	for(i=0;i<n;i++)
	printf("%f%d",x.vaiable,p[i].degree,p[i].coefficient);
}
void output()
{}*/
void main()
{
	int n,x;
	input1(&n,&x);
	struct polynomial p[n];
	input2(n,p);
	
}
