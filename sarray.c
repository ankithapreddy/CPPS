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
void input2(int n,struct fractions a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the numerator of fraction %d : \n",i);
		scanf("%d",&a[i+1].numerator);
		printf("Enter the denominator of fraction  %d : \n",i);
		scanf("%d",&a[i+1].denominator);
	}
}
struct fractions compute(int n,struct fractions a[n])
{
	struct fractions result;
	int i,denominator;
	result.numerator=0; 
	result.denominator=1;	
	for(i=0;i<n;i++)
	{
		result.denominator*=a[i+1].denominator;
		result.numerator+=(result.denominator)/(a[i+1].denominator);
	}
	return result;
}
void output(struct fractions result)
{
	printf("The sum of two fractions is:%d/%d\n",result.numerator,result.denominator);
}
int main()
{
	int n;
	input1(&n);
	struct fractions a[n];
	struct fractions result;
	input2(n,a);
	result=compute(n,a);
	output(result);
	return 0;
}
