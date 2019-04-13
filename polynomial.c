#include<stdio.h>
#include<math.h>
struct polynomial{
	int degree;
	float coefficient;
};
void input1(int *n)
{
	printf("Enter the number of terms of the polynomial\n");
	scanf("%d",n);
}
void input2(int *n,struct polynomial p[])
{
	for(i=0;i<=n;i++)
	{
		printf("Enter the degree of polynomial %d\n",i+1);
		scanf("%d",&a[i].degree);
		printf("Enter the coefficient of the polynomial%d\n",i+1);
		scanf("%d",&a[i].coefficient);
	}

}
void output()
{}
void main()
{
	int n;
	input1(&n);
	struct polynomial p[n];
	input2(&n,&p);
	
}
