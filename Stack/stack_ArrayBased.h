
#ifndef STACK_ARRAYBASED_H
#define STACK_ARRAYBASED_H

#define MAXSTACK 100
//#define StackEntry int
typedef int StackEntry;

typedef struct stack{
	int top;
	StackEntry entry[MAXSTACK];
} Stack;

void Push(StackEntry item, Stack *ps)
{
	ps->entry[ps->top++] = item;
}

void Pop(StackEntry *item, Stack *ps)
{
	*item = ps->entry[--ps->top];
}

int StackEmpty(Stack *ps)
{
    return ps->top <= 0;
}

int StackFull(Stack *ps)
{
	return ps->top >= MAXSTACK;
}

void CreateStack(Stack *ps)
{
     ps->top = 0;
}

void StackTop(StackEntry *item, Stack *ps)
{
    *item = ps->entry[ps->top-1];   
} 

int StackSize(Stack *ps)
{
     return ps->top;
}

void ClearStack(Stack *ps)
{
     ps->top = 0;
}

void TraverseStack(Stack *ps, void (*pvisit)(StackEntry))
{
	for(int i=ps->top; i>0; i--)
		(*pvisit)(ps->entry[i-1]);
}  


#endif