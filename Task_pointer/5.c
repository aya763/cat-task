#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* sum(int* a,int* b)
{
	int c=*a+*b;
	return &c;
}

void main()
{
	int a=3,b=4;
	int *p=sum(&a,&b);
	printf("%d",*p);
	/*char a[4]="john";
	printf("%s",a);
	int x=10,y=20,z=30;
	int *px=&x,*py=&y,*pz=&z;
	printf("x=%d\ty=%d\tz=%d\n\n",x,y,z);//value of them
	printf("*px=%d\t*py=%d\t*pz=%d\n\n",*px,*py,*pz);//value of x,y,z
	printf("px=%d\tpy=%d\tpz=%d\n\n",px,py,pz);//address of x,y,z
	printf("Swapping pointer\n");
	pz=px;//pz point to x
	px=py;//px point to y
	py=pz;//py point to x
	printf("x=%d\ty=%d\tz=%d\n\n",x,y,z);//value of them
	printf("*px=%d\t*py=%d\t*pz=%d\n\n",*px,*py,*pz);//value of y,x,x
	printf("px=%d\tpy=%d\tpz=%d\n\n",px,py,pz);//address of y,x,x*/
}