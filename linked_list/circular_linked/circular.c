#include<stdio.h>
#include<stdlib.h>
typedef struct st{

int data;
struct st *link;

}node;
int cnt=0;

node * enter_data(node *);
void display(node *);
node * del_data(node *);


main()
{

node *head=NULL; 
int choice;
while(1)
{
	printf(">>>>>>>>>>menu<<<<<<<<<<\n");
	printf("1: enter node\n2: delete node\n3: display\n4: exit\n");
	printf("enter choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:head=enter_data(head);
		break;
	case 2:head=del_data(head);
		break;
	case 3:display(head);
		break;
	case 4:exit(0);
		break;
	default:printf("invalid choice!!!!!!!\n");
		break;
	}while(getchar()!=10);

}
}
node * enter_data(node *head)
{
node *nu=NULL;
nu=calloc(1,sizeof(node));
printf("enter data: ");
scanf("%d",&nu->data);
if(head==NULL)
{
	head=nu;
	nu->link=head;
	cnt++;
	return head;
}
else
{
	nu->link=head;
	head=nu;
	cnt++;
	return head;
}


}

node * del_data(node *head)
{
node *temp=head;

	if(cnt==0)
	{
	printf("no node to delete\n");
	return head;
	}	
	else if(cnt>1)
	{
		temp=temp->link;
		free(head);
		head=NULL;
		head=temp;
		cnt--;
		return head;
	}
	else if(cnt==1)
	{
		free(head);
		head=NULL;
		cnt--;
	}


}
void display(node *head)
{
int i=0;
node *temp=head;
	while(i<cnt)
	{
		printf("%d>>",temp->data);
		temp=temp->link;
		i++;
	}
printf("\n\n");

}
