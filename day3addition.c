#include<stdio.h>
int input()
{
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&arr[n]); 
	}
	
}
int compute(int arr[])
{
	int i,x=0,n;
	for(i=0;i<n;i++)
	{
		x=x+arr[i];
	}
	return x;
}
int output()
{
	int x;
	printf("The sum is:%d",x);
	return x;
}

int main()
{
	int z,x,n,i;
	z=input(&n);
	x=compute(z);
	output(x);
}
In this code i am able to take the array size and the array elements but i am not able to compute it and 
return thr value.
