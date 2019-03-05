
#include<stdio.h>
struct fraction{
	int numerator;
	int denominator;
};
void input1(struct fraction *k)
{
	printf("Enter the values of numerator \n");
	scanf("%d",&k->numerator);
	printf("Enter the value of denomiantor\n");
	scanf("%d",&k->denominator);
}
void input2(struct fraction *l)
{
	printf("Enter the value of numerator\n");
	scanf("%d",&l->numerator);
	printf("Enter the value of denominator\n");
	scanf("%d",&l->denominator);
}
void show_fractions(struct fraction *k,struct fraction *l)
{
	printf("The first fraction is %d/%d\n",k->numerator,k->denominator);
	printf("The second fraction is %d/%d\n",l->numerator,l->denominator);
}
int main()
{
	struct fraction k,l;
	input1(&k);
	input2(&l);
	show_fractions(&k,&l);
	return 0;
}
