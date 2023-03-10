
#ifndef STACK_LINKEDBASED_H
#define STACK_LINKEDBASED_H


#define StackEntry int

typedef struct stacknode{
	StackEntry entry;
	struct stacknode *next;
}StackNode;

typedef struct stack{
	StackNode *top;
}Stack;

StackNode *MakeStackNode(StackEntry item)
{
	StackNode *p;
	p=(StackNode *)malloc(sizeof(StackNode));
	p->entry=item;
	p->next=NULL;
	return p;
}

void Push(StackEntry item, Stack *ps)
{
	StackNode *p=MakeStackNode(item);
	p->next=ps->top;
	ps->top=p;
}

void Pop(StackEntry *pitem, Stack *ps)
{
	StackNode *p;
	*pitem=ps->top->entry;
	p=ps->top;
	ps->top=ps->top->next;
	free(p);
}

int StackEmpty(Stack *ps)
{
	return ps->top==NULL;
}

int StackFull(Stack *ps)
{
	return 0;
}

void CreateStack (Stack *ps)
{
	ps->top=NULL;
}

void StackTop(StackEntry *pitem, Stack *ps)
{
	*pitem=ps->top->entry;
}

int	StackSize(Stack *ps)
{
  int x;
  StackNode *ptrs=ps->top;
  for(x=0; ptrs; ptrs=ptrs->next)
    x++;
  return x;
}

void ClearStack(Stack *ps)
{
	StackNode *p=ps->top;
	while(p){
		p=p->next;
		free(ps->top);
		ps->top=p;
	}
}

void TraverseStack(Stack *ps, void (*pvisit)(StackEntry))
{
	for(StackNode *p=ps->top; p; p=p->next)
		(*pvisit)(p->entry);

}


#endif