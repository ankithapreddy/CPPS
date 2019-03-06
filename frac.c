
#include<stdio.h>
struct fraction{
	int numerator;
	int denominator;
};
struct fraction input1(struct fraction *k)
{
	printf("Enter the value of numerator\n");
	scanf("%d",&k->numerator);
	printf("Enter the value of denominator\n");
	scanf("%d",&k->denominator);
}
struct fraction input2(struct fraction *l)
{
	printf("Enter the value of numerator\n");
	scanf("%d",&l->numerator);
	printf("Enter the value of denominator\n");
	scanf("%d",&l->denominator);
}
struct fraction compute(struct fraction k,struct fraction l)
{
	struct fraction r;
	r.numerator=(k.numerator*l.denominator+l.numerator*k.denominator);
	r.denominator=l.denominator*k.denominator;
	return r;
}
void output(struct fraction r)
{
	printf("The sum of two fractions is %d/%d\n",r.numerator,r.denominator);
}
void main()
{
	struct fraction k,l,r;
	input1(&k);
	input2(&l);
	r=compute(k,l);
	output(r);
}
	#include<stdio.h>
struct fraction{
	int numerator;
	int denominator;
};
struct fraction input1(struct fraction *k)
{
	printf("Enter the value of numerator\n");
	scanf("%d",&k->numerator);
	printf("Enter the value of denominator\n");
	scanf("%d",&k->denominator);
}
struct fraction input2(struct fraction *l)
{
	printf("Enter the value of numerator\n");
	scanf("%d",&l->numerator);
	printf("Enter the value of denominator\n");
	scanf("%d",&l->denominator);
}
struct fraction compute(struct fraction k,struct fraction l)
{
	struct fraction r;
	r.numerator=(k.numerator*l.denominator+l.numerator*k.denominator);
	r.denominator=l.denominator*k.denominator;
	return r;
}
void output(struct fraction r)
{
	printf("The sum of two fractions is %d/%d\n",r.numerator,r.denominator);
}
void main()
{
	struct fraction k,l,r;
	input1(&k);
	input2(&l);
	r=compute(k,l);
	output(r);
}
	
