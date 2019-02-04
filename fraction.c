#include<stdio.h>
struct fraction
{
	int numerator;
	int denominator;
};
struct fraction get_fraction(struct fraction *f)
{
	printf("Enter the value of numerator:");
	scanf("%d",&f->numerator);
	printf("Enter the value of denominaor:");
	scanf("%d",&f->denominator);
}
void show_fraction(struct fraction f)
{
	printf("%d/%d\n",f.numerator,f.denominator);
}
int main()
{
	struct fraction f;
	get_fraction(&f);
	show_fraction(f);
	return 0;
}	
