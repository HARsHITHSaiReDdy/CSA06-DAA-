#include<stdio.h>
void sort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		sort(arr,l,m);
		sort(arr,m+1,r);
		merge (arr,l,m,r);
	}
}
void merge(int arr[],int l,int m,int r)
{
	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
		if(l[i]<=r[j])
		{
			arr[k]=l[i];
			i++;
		}
		else{
			arr[k]=r[j];
			j++;
		}
		k++;
	}
}
int main()
{
	int i,j,k,arr[],p;
	printf("enter the array:");
	scanf("%d",&p);
	printf("array:");
	for(i=0;i<p;i++)
	{
	scanf("%d",&arr[i]);
	}	
	while(i<n1)
	{
		arr[k]=l[i];
		i++;
		k++;	
	}
	while(j<n2)
	{
		arr[k]=r[j];
		j++;
		k++;	
	}
	
}

