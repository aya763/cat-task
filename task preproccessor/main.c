#include<stdio.h>
#include "STD_MATH.h"



void main(void)
{
	
	int x=3; //3 -->0000 0011
	printf("%d\n",SET_BIT(x,2)); //0000 0111 -->7
	printf("%d\n",CLEAR_BIT(x,2)); //0000 0011 -->3
	printf("%d\n",READ_BIT(x,2)); //0
	printf("%d\n",TOGGLE_BIT(x,2));//0000 0111 -->7
	
	
}