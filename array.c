#include<stdio.h>
int  a[20],num,flag=0,i,n;
void insert()
{
//int a[20],n,i;
printf("enter the size of the array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter a[%d]: ",i);
	scanf("%d",&a[i]);
}
}
void occurance()
{
//	int  a[20],num,flag=0,i,n;
	printf("Enter the elements to be search: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		//{
			flag=1;
			//printf("element found at position:%d\n",i);
		//}	
	}
	if(flag==1)
	{
		printf("Element  found at %d position",i);
	}
	else
	{
		printf("Element not found ");
	}
}
int main()
{
	insert();
	occurance();
	return 0;
}
