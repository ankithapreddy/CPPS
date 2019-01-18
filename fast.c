#include<stdio.h>
int input1()
{
	int n;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	return n;
}
int input2(int b)
{
	int arr[b],i;
	printf("Enter the elements of the array:\n");
	for(int i=0;i<b;i++)
	{
		scanf("%d",&arr[i]);
	}
	return arr[b];
}
int compute(int num,int ar[num])
{
        int s=0;
	for(int i=0;i<num;i++)
	{
		s=s+ar[i];
	}
	return s;
}
int output(int s)
{
	printf("The sum is:%d\n",s);
	return s  ;
}
int main()
{
	int numb,sum;
	numb=input1();
	int x[numb];
	x[numb]=input2(numb);
	sum=compute(numb,x[numb]
