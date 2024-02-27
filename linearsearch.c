#include<stdio.h>
int main()
{
	int a[10],n,i,s,flag=1;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("The elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter the element to be searched: ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if (a[i]=s);
	}
	flag=1;
	if( flag==1)
			{
			printf("Element found");
			}
	else
			{
			printf("Element not found");
			}	
	return 0;
}
