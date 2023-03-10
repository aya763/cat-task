#include<stdio.h>
#include <stdlib.h>
//#include "queue_ArrayBased.h"
#include "queue_LINKEDBased.h"

void display(QueueEntry x)
{
	printf("%d\n",x);
}

void main()
{
	
	while(1)
	{
		printf("\t*****WELCOME*****\n");
		printf("Create Queue? yes-->1 ,no-->0\n");
		int check;
		scanf("%d",&check);
		if(check==1)
		{
			Queue Q;
			QueueEntry item;
			CreateQueue(&Q);
			int choice;
			do
			{
				printf("\n1-Dequeue\n2-Enqueue\n3-display\n4-Get Queue size\n");
				printf("5-Clear Queue\n6-Exit\n");
				printf("your choice:");
				scanf("%d",&choice);
				switch(choice)
				{
				case 1:
					if(!QueueEmpty(&Q))
					{
					Serve(&item,&Q);
					printf("item=%d is served\n",item);
					}
					else {printf(" underflow condition\n");}
					break;
				case 2:
					if(!QueueFull(&Q))
					{
					printf("Enter item you want to enqueue:");
					scanf("%d",&item);
					if(!Append(item,&Q)){printf("ERROR\n");}else {printf("Done\n");}
					}
					else {printf(" overflow condition\n");}
					break;
				case 3:
					if(!QueueEmpty(&Q))
					{
					TraverseQueue(&Q, display);
					}
					else {printf("queue empty\n");}
					break;
				case 4:
					printf("queue size=%d\n",QueueSize(&Q));
					break;
				case 5:
					ClearQueue(&Q);
					printf("Done\n");
					break;
				case 6:
					//printf("Exit\n");
					break;
				default:
					printf("not a valid choice\n");
					break;
				}
			}while(choice!=6);
		}
		else
		{
			break;
		}
	}
	
}