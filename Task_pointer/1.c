#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int n=10,*p=&n;
	printf("num=%d\n",n);
	*p=20;
	printf("num=%d\n",n);
}