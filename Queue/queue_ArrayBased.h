
#ifndef QUEUE_ARRAYBASED_H
#define QUEUE_ARRAYBASED_H

#define MAXQUEUE 100
#define QueueEntry int

typedef struct queue{
   int front;
   int rear;
   int size;
   QueueEntry entry[MAXQUEUE];
}Queue;

void CreateQueue(Queue *pq)
{
	pq->front= 0;
	pq->rear = -1;
	pq->size = 0; 
}

int Append(QueueEntry e, Queue* pq)
{
  pq->rear = (pq->rear + 1) % MAXQUEUE;
  pq->entry[pq->rear] = e;
  pq->size++;
  return 1;
}

void Serve(QueueEntry *pe, Queue* pq){
  *pe = pq->entry[pq->front];
  pq->front = (pq->front + 1) % MAXQUEUE;
  pq->size--;
}

int QueueEmpty(Queue* pq)
{
	return !pq->size;
}

int QueueFull(Queue* pq)
{
	return (pq->size == MAXQUEUE);
}

int QueueSize(Queue* pq)
{
	return pq->size;
}
void ClearQueue(Queue* pq)
{
	pq->front = 0;
	pq->rear  = -1;
	pq->size  = 0; 
}

void TraverseQueue(Queue* pq, void (*pf)(QueueEntry))
{
	int pos, s;
	for(pos=pq->front, s=0; s<pq->size; s++){
		(*pf)(pq->entry[pos]);
		pos=(pos+1)%MAXQUEUE;
	}
}





#endif
