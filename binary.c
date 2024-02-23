#include<stdio.h>
int binarysearch(int a[],int l,int r,int x)
{
	if(r>=l)
	{
		int mid=l+(r-1)/2;
		if(a[mid]==x)
		return mid;
		if(a[mid]>x)
		{
			return binarysearch(a,l,mid,x);
		}
		return binarysearch(a,l,mid-1,x);
	}
	
	return -1;
}
int main()
{
	int a[]={2,3,4,6,10,30};
	int size=sizeof(a)/sizeof(a[0]);
	int x=10;
	int index=binarysearch(a,0,size-1,x);
	if(index==-1)
	{
		printf("Element not found");
	}
	else
	{
		printf("Element is present at index %d",index);
	}
	return 0;
}
