#include<stdio.h>
int main()
{
	int a[]={10,11,23,6,76,87};
	int x,i,flag=0;
	printf("enter the value:");
	scanf("%d",&x);
	for(i=0;i<6;i++)
	{
		if(a[i]==x)
		{   
		    printf("the value %d",i);
		    flag=1;
			break;	   	
	 	}
	 }
	if(flag==1)
	{
		printf("\n it is present");
	}
	else
	{
		printf("\n it is not present");
	}
return 0;
}
