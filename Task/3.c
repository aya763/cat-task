#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *mul(int a[5],int b[5],int c[5])
{
	for(int i=0;i<5;i++)
	{
		c[i]=a[i]*b[i];
	}
	return &c[0];
}

void main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={1,2,3,4,5};
	int c[5],*p;
	p=mul(a,b,c);
	printf("Result\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",*(p+i));
	}
}