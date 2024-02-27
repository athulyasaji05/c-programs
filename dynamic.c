#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("\nDYNAMIC MEMORY ALLOCATION\n");
	printf("MALLOC FUNCTION\n");
	int *p,n,i,*a;
	printf("Number of elements to be entered:");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int)*n);
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d:",i);
		scanf("%d",p+i);
	}
	printf("The numbers entered are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	free(p);
	printf("\nCALLOC FUNCTION\n");
	printf("Number of elements to be entered:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d:",i);
		scanf("%d",&a[i]);
	}
	printf("The number entered are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	free(a);
	return 0;
}
