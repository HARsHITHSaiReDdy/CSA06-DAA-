#include<stdio.h>
int main()
{
	int n,sum=0,rev,temp;
	printf("enter a number :");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	rev=n%10;
	sum=sum+(rev*rev*rev);
	n=n/10;
	}
	if(sum==temp)
	{
	printf("%d is an armstrong number",sum);	
	}
	else
	{
		printf("%d is not an armstrong",sum);
	}
	return 0;
}
