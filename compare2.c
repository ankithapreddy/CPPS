#include<stdio.h>
int input(int *a,int *b,int *c)
{
	printf("Enter the values of a, b and c\n");
	scanf("%d%d%d",a,b,c);
}
int compare(int a, int b, int c)
{
{
	if(a<b) {

	if(a<c) {
	
	return a;

	}
}	
}
{
	if(b<a) {


	if(b<c){
		return b;
	}
}
}
{
	if(c<a) {

	if(c<b) {
	return c;

	}
}
}
}
int output(int x, int y, int z, int o)
{
	printf("%d is smaller than %d,%d and %d",o,x,y,z);
	return o;
} 
int main()
{
	int x,y,z,o;
	input(&x,&y,&z);
	o=compare(x,y,z);
	output(x,y,z,o);
}
