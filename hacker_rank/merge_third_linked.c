#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
struct linked{

	int val;

	struct linked *next;

};


struct linked * random_data(struct linked *head);
void display(struct linked *head);
struct linked* SortedMerge(struct linked* a, struct linked* b) ;



int main()
{
	int cnt1,cnt2,i;
	struct linked *head1=NULL,*head2=NULL,*head3=NULL;

	printf("enter number of val for linked1: ");
	scanf("%d",&cnt1);

	for(i=0;i<cnt1;i++)
		head1=random_data(head1);

	display(head1);



	printf("enter number of val for linked2: ");
	scanf("%d",&cnt2);

	for(i=0;i<cnt2;i++)
		head2=random_data(head2);

	display(head2);
	head3=SortedMerge(head1,head2);
	display(head3);



}


struct linked * random_data(struct linked * head)
{

	int i=0;
	struct linked *nu=NULL,*temp=head;


	nu=calloc(1,sizeof(struct linked));

	sleep(1);
	srand(time(0));

	nu->val=rand()%10+50;

	if(head==NULL)
	{
		head=nu;
		return head;
	}
	else if(head->val>nu->val)
	{
		nu->next=head;
		head=nu;
		return head;
	}
	else
	{
		while((temp->next)&&(nu->val)>(temp->next->val))
			temp=temp->next;

		if(temp->next==NULL)
			temp->next=nu;
		else
		{
			nu->next=temp->next;
			temp->next=nu;
		}

		return head;
	}
}




void display(struct linked *head)
{
	struct linked *temp=head;

	while(temp)
	{
		printf("%d-->",temp->val);
		temp=temp->next;
	}
	printf("\n\n");


}



struct linked* SortedMerge(struct linked* a, struct linked * b) 
{
	struct linked* result = NULL;

	/* Base cases */
	if (a == NULL) 
		return(b);
	else if (b==NULL) 
		return(a);

	/* Pick either a or b, and recur */
	if (a->val <= b->val) 
	{
		result = a;
		result->next = SortedMerge(a->next, b);
	}
	else
	{
		result = b;
		result->next = SortedMerge(a, b->next);
	}
	return(result);
}



