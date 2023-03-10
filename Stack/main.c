#include<stdio.h>
#include <stdlib.h>
//#include "stack_ArrayBased.h"
#include "stack_LINKEDBased.h"

void display(StackEntry x)
{
	printf("%d\n",x);
}

void main()
{
	
	while(1)
	{
		printf("\t*****WELCOME*****\n");
		printf("Create Stack? yes-->1 ,no-->0\n");
		int check;
		scanf("%d",&check);
		if(check==1)
		{
			Stack S;
			StackEntry item;
			CreateStack(&S);
			int choice;
			do
			{
				printf("\n1-pop\n2-push\n3-display\n4-Get stack top\n5-Get stack size\n");
				printf("6-Clear Stack\n7-Exit\n");
				printf("your choice:");
				scanf("%d",&choice);
				switch(choice)
				{
				case 1:
					if(!StackEmpty(&S))
					{
					Pop(&item,&S);
					printf("item=%d is poped\n",item);
					}
					else {printf("stack underflow\n");}
					break;
				case 2:
					if(!StackFull(&S))
					{
					printf("Enter item you want to push:");
					scanf("%d",&item);
					Push(item,&S);
					}
					else {printf("stack overflow\n");}
					break;
				case 3:
					if(!StackEmpty(&S))
					{
					TraverseStack(&S, display);
					}
					else {printf("stack empty\n");}
					break;
				case 4:
					if(!StackEmpty(&S))
					{
					StackTop(&item, &S);
					printf("Top element=%d\n",item);
					}
					else {printf("stack empty\n");}
					break;
				case 5:
					printf("stack size=%d\n",StackSize(&S));
					break;
				case 6:
					ClearStack(&S);
					printf("Done\n");
					break;
				case 7:
					break;
				default:
					printf("not a valid choice\n");
					break;
				}
			}while(choice!=7);
		}
		else
		{
			break;
		}
	}
	
}