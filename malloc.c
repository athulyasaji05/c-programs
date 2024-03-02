#include<stdio.h>
int main()
{
	int *p;
	*p=(int *)malloc(sizeof(int));
	*p=10;
	p=(int *)realloc(p,sizeof(int)*2);
	*(p+1)=20;
	printf("%d %d",*p,*(p+1));
	printf("%d %d",p[0],p[1]);
	return 0;
}
