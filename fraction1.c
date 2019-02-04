#include<stdio.h>
struct fraction
{
	int numerator;
	int denominator;
};
struct fraction get_fraction(struct fraction *f,struct fraction *g)
{
	printf("Enter the value of numerator:");
	scanf("%d",&f->numerator);
	printf("Enter the value of denominator:");
	scanf("%d",&f->denominator);
	printf("Enter the value of numerator:");
	scanf("%d",&g->numerator);
	printf("Enter the value of denominator:");
	scanf("%d",&g->denominator);
}
/*void show_fraction(struct fraction f,struct fraction g)
{
	printf("The first farction is:%d/%d\n",f.numerator,f.denominator);
	printf("The second fraction is:%d/%d\n",g.numerator,g.denominator);
}*/
struct fraction add1(struct fraction f,struct fraction g)
{
	int sumn;
	int sumd;
	sumn=(f.numerator*g.denominator)+(g.numerator*f.denominator);
	sumd=(f.denominator*g.denominator);
}
void output(int n,int d)
{
	printf("The sum is %d/%d",n,d);
} 
	
int main()
{
	struct fraction f,g;
	int n,d;
	get_fraction(&f,&g);
	show_fraction(f,g);
	struct fraction add1(n,d);
	output(n,d);
}	
