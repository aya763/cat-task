#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void fun(int a[6])
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nArray after sorting:\n");
	for(int k=0;k<6;k++)
	{
		printf("%d\t",a[k]);
	}
}

void main()
{
	int a[6]={4,7,8,5,2,1};
	printf("Array before sorting:\n");
	for(int k=0;k<6;k++)
	{
		printf("%d\t",a[k]);
	}
	fun(a);
}