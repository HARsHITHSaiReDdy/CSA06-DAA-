#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("enter the values:");
	scanf("%d%d",&a,&b);
	printf("\n before swapping of a=%d,b=%d",a,b);
	swap(a,b);
	return 0;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n after swapping a=%d,b=%d",a,b);
}
