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
	struct fractions a[n];
	
}
/*void input2(int *n,struct fractions *a[n])
{
	int i;
	printf("Enter the fractions you want to add:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]->numerator);
		scanf("%d",&a[i]->denominator);
	}
}*/
struct fractions compute()
{
}
void output()
{
}
void main()
{
	int n;
	//struct fractions a[n];
	input1(&n);
	//input2(&n,&a[n]);
}
