#include<stdio.h>
struct fractions{
	int numerator;
	int denominator;
};
struct fractions input(struct fractions *k,struct fractions *l)
{
	printf("Enter the values of numerator \n");
	scanf("%d",&k->numerator);
	printf("Enter the value of denomiantor:\n");
	scanf("%d",&k->denominator);
	printf("Enter the value of numerator\n");
	scanf("%d",&l->numerator);
	printf("Enter the value of denominator\n");
	scanf("%d",&l->denominator);
}
int compute(struct fractions *k,struct fractions *l)
{
	int sum1,sum2;
	sum1=((k->numerator*l->denominator)+(l->numerator*k->denominator));
	sum2=(k->denominator+l->denominator);
}
void output(int sum1,int sum2)
{
	printf("%d/%d\n",&sum1,&sum2);
}
int main()
{
	struct fractions k,l;
	input(&k,&l);
	compute(&k,&l);
	int sum1,sum2;
	output(sum1,sum2);
}
