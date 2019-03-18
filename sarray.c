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
	for(i=1;i<=n;i++)
	{
		printf("Enter the numerator of fraction %d : \n",i);
		scanf("%d",&a[i-1].numerator);
		printf("Enter the denominator of fraction  %d : \n",i);
		scanf("%d",&a[i-1].denominator);
	}
}
struct fractions compute(int n,struct fractions a[],struct fractions *result)
{
	int i,num=1,temp=1;
	result->numerator=0; 
	result->denominator=1;	
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j!=i)
			{
				temp*=a[j].denominator;
			}
		}
	num=a[i].numerator*temp;
	result->numerator+=num;
	result->denominator*=a[i].denominator;
	temp=1;
	}
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
	compute(n,a,&result);
	output(result);
	return 0;
}
