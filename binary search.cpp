#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50};
	int low=0,high=4,mid,x;
	printf("enter a value:");
	scanf("%d",&x);
	while(low <= mid)
	{
		mid=(low + high)/2;
		if(a[mid]>x)
		{
			high=mid-1;
		}
		else if(a[mid]<x)
		{
			low=mid+1;
		}
		else if(a[mid]==x)
		{
			printf("%d is answer",a[mid]);
		}
	}
}
