#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sum(int*px,int*py)
{
	return (*px+*py);
}

void main()
{
	int x,y;
	printf("Enter x:");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	printf("Sum x+y=%d\n",sum(&x,&y));
}