#include<stdio.h> 



struct employee{
	int salary ;
	int bouns;
	int deducation;
}Mohsen,Maged,Mariem;

void main(void)
{
	
	printf("enter Mohsen salary:");
	scanf("%d",&Mohsen.salary);
	printf("enter Mohsen bouns:");
	scanf("%d",&Mohsen.bouns);
	printf("enter Mohsen deducation:");
	scanf("%d",&Mohsen.deducation);
	
	printf("\nenter Maged salary:");
	scanf("%d",&Maged.salary);
	printf("enter Maged bouns:");
	scanf("%d",&Maged.bouns);
	printf("enter Maged deducation:");
	scanf("%d",&Maged.deducation);
	
	printf("\nenter Mariem salary:");
	scanf("%d",&Mariem.salary);
	printf("enter Mariem bouns:");
	scanf("%d",&Mariem.bouns);
	printf("enter Mariem deducation:");
	scanf("%d",&Mariem.deducation);
	
	int sum;
	sum=Mohsen.salary+Mohsen.bouns-Mohsen.deducation+Maged.salary+Maged.bouns-Maged.deducation+Mariem.salary+Mariem.bouns-Mariem.deducation;
	printf("the total value shall be supplied by finance team is:%d",sum);
}