#include<stdio.h>
int main()
{
	int a[]={1,5,4,6,7,8,3,2,9},min,max,temp,n,m,b=0,c=9;
	int i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nArray after implementing bubble sort: ");
    for(i=1;i<10;i++)
	{
        printf("%d", a[i]);
    }
    printf("\ngive min and max place value:");
    scanf("%d%d",&min,&max);
    n=a[b+min];
    m=a[c-max];
    printf("\nmin value of the given position:%d",min);
    printf("\nmax value of the given position:%d",max);
    return 0;
}
