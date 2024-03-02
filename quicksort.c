#include<stdio.h>
int partition(int a[],int p,int q);
void Quicksort(int a[],int p,int q)
{
	int j;
	if(p<q)
	{
	j=partition(a,p,q);
	Quicksort(a,p,j-1);	
	Quicksort(a,j+1,q);
	}
}
int partition(int a[],int p,int q)
{
int x,i,j,t;
x=a[p];
i=p;
j=q;
while(i<j)
{
	while(a[i]<=x)
	{
		i++;
	}
	while(a[j]>x)
	{
		j--;
	}
	if(i<j)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	else
	{
		t=a[p];
		a[p]=a[j];
		a[j]=t;
	}
}
 return j;   
}
int main()
{
	int i;
	int arr[]={7,6,10,5,9,2,1,15,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	Quicksort(arr,0,n-1);
	printf("Sorted array: ");
	for(i=0;i<n;i++)
	{
	printf("%d  ",arr[i]);
	}
	return 0;
}

