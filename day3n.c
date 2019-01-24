#include<stdio.h>
int input()
{
	int n;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	return n;
}
int compute(int n)
{
	int i,arr[n],sum=0;
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
void output(int sum)
{
	printf("%d is the sum",sum);
}
int main()
{
	int n,sum;
	n=input();
	sum=compute(n);
	output(sum);
	return 0;
}
