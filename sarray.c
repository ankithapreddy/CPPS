#include<stdio.h>
struct fractions
{
	int numerator;
	int denominator;
};
void input1(int *n)
{
	printf("Enter the number of fractions you want to add:\n");
	scanf("%d",n);
	
}
void input2(int *n,struct fractions a[])
{
	int i;
	for(i=0;i<*n;i++)
	{
		printf("Enter the numerators\n");
		scanf("%d",&a[i].numerator);
		printf("Enter the denominator\n");
		scanf("%d",&a[i].denominator);
	}
}
struct fractions compute(int *n,struct fractions a[])
{
	int i;
	for(i=0;i<*n-1;i++)
	{
        	a[i].numerator=(a[i].numerator*a[i].denominator+a[i].numerator*a[i].denominator);
		a[i].denominator=a[i].denominator*a[i].denominator;
	}
}
void output(int *n,struct fractions a[])
{
	printf("The sum of two fractions is:%d/%d\n",a[n].numerator,a[n].denominator);
}
int main()
{
	int n,r;
	input1(&n);
	struct fractions a[n];
	input2(&n,&a[n]);
	compute(n,&a[n]);
	output(&n,&a[n]);
	return 0;
}
