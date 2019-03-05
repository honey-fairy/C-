#if 0
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define MAXSIZE 100

typedef int Elemtype;

typedef struct Que
{
	Elemtype data[MAXSIZE];
	int front;
	int rear;
}Que;

typedef struct Stack
{
	Que *q1;
	Que *q2;
}Stack;

static int ISempty_Que1(Que *q1)
{
	if(q1->front == q1->rear )
	{
		return 1;
	}
	else
		return 0;
}

static int ISfull_Que1(Que *q1)
{
	if( q1->rear == MAXSIZE )
	{
		return 1;
	}
	else
		return 0;
}

static int ISfull_Que2(Que *q2)
{
	if( q2->rear == MAXSIZE )
	{
		return 1;
	}
	return 0;
}

static int ISempty_Que2(Que *q2)
{
	if(q2->front == q2->rear)
	{
		return 1;
	}
	else
		return 0;
}

static int ISempty_Stack(Stack *st)
{
	if( ISempty_Que1(st->q1) || ISempty_Que2(st->q2) )
	{
		return 1;
	}
	else
		return 0;
} 
static int ISfull_Stack(Stack *st)
{
	if( !ISempty_Que1(st->q1) && !ISempty_Que2(st->q2) )
	{
		return 1;
	}
	return 0;
}

void Init_Que(Que *que)
{
	assert(que != NULL);
	que->data = (Elemtype *)malloc(sizeof(Elemtype) * SIZE);
	que->front = que->rear = 0;
}

Stack *Init_Stack()
{
	Stack *st = (Stack *)malloc(sizeof(Stack));
	assert(st != NULL);

	Init_Que(st->q1);
	Init_Que(st->q2);

	return st;
}

#endif