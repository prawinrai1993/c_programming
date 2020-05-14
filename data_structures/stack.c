#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int cnt=-1;
struct stack{
		int val;
		struct stack *next;
		};

void push(struct stack **,int);
void pop(struct stack **);
int isempty(struct stack *);
int isfull();
void display(struct stack *);

main()
{
	struct stack *top=NULL;
	int choice,val;
	while(1)
	{
	printf("1. push 2. pop 3.display\n");
	printf("enter ur choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1: printf("enter the val to be push\n");
		scanf("%d",&val);
		if(isfull())
		{
			printf("stack is full\n");
		}
		else
		{
			push(&top,val);
		}
		break;
	case 2: if(isempty(top))
		{
			printf("stack is empty\n");
		}
		else
		{
			pop(&top);
		}
			
		break;
	case 3: display(top);
		break;
	default: printf("invalid choice\n");
	}
}
	
}

int isfull()
{
	if(cnt==MAX-1)
	return 1;
	else
	return 0;
}

int isempty(struct stack *top)
{
	if(top==NULL)
	return 1;
	else
	return 0;
}

void push(struct stack **top,int val)
{
	struct stack *nu;
	nu=malloc(sizeof(struct stack));
	nu->val=val;
	nu->next=*top;
	*top=nu;
	cnt++;
}

void pop(struct stack **top)
{
	struct stack *temp;
	temp=*top;
	printf("%d--->\n",(*top)->val);
	*top=(*top)->next;
	free(temp);
	temp=NULL;
	cnt--;
}

void display(struct stack *top)
{
	struct stack *temp;
	temp=top;
	while(temp)
	{
		printf("%d---->",temp->val);
		temp=temp->next;
	}
	printf("\n");
}

