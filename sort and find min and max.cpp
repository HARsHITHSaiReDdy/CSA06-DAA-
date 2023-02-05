#include<stdio.h>
int main()
{
	int a[]={12,17,54,67,8},min,max,i;
	min=a[0];
	max=a[0];
	for(i=1;i<5;i++)
	{
		if (a[i]<min)
		{
			min=a[i];
		}
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	printf("min is %d\n",min);
	printf("max is %d\n",max);
return 0;
}
