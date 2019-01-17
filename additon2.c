#include<stdio.h>
int input1()
{ 
	int n;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	return n;
}
int input2(int n)
{
	int i;
	int arr[n];
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
      	scanf("%d",&arr[n]);
	}
}
int compute(int arr[])
{
	int i,sum=0,n;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int output()
{
	int sum;
	printf("The sum is:%d",sum);
	return sum;
}
/*int compute(int arr[n])
{
	int sum;
	sum=sum+arr[n];
	return sum;
}
int output()
{
	int sum;
	printf("The sum is: %d",sum);
	return sum;
}*/	
int main()
{
	int n,z,x,sum;
	int arr[n];
	z=input1();
	x=input2(z);
	compute(z);
	output(sum);
}
	
