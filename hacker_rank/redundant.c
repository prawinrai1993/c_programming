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
struct linked* redundant(struct linked* head) ;



int main()
{
	int cnt1,i;
	struct linked *head1=NULL;

	printf("enter number of val for linked1: ");
	scanf("%d",&cnt1);

	for(i=0;i<cnt1;i++)
		head1=random_data(head1);

	display(head1);

	head1=redundant(head1);
	display(head1);



}
struct linked * random_data(struct linked * head)
{

	int i=0;
	struct linked *nu=NULL,*temp=head;


	nu=calloc(1,sizeof(struct linked));


	scanf("%d",&nu->val);

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

struct linked* redundant(struct linked* head) 
{
	struct linked* temp1 = head,*temp2=temp1->next,*pre=temp1;



	while(temp1)
	{
		temp2=temp1->next;
		pre=temp1;
		while(temp2)
		{


			if(temp1->val==temp2->val)
			{

				pre->next=temp2->next;
				free(temp2);
				temp2=NULL;
				temp2=pre->next;

			}
			else
			{
				if(temp2)
					temp2=temp2->next;

			}

		}
		temp1=temp1->next;
	}


	return head;

}



