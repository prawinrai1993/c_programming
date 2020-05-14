
#include"my_headers.h"



//extern NODE *head;

NODE * input(NODE *head)
{

NODE *nu=NULL,*temp=NULL;


nu=calloc(1,sizeof(NODE));
printf("\nenter roll no.: ");
scanf("%d",&(nu->roll));
getchar();
printf("\nenter name: ");
gets(nu->name);
printf("\nenter contact: ");
gets(nu->contact);
printf("\nenter marks: ");
scanf("%f",&(nu->marks));
	temp=head;

	if(head==NULL)
		{
			head=nu;
		}
	else if((nu->roll)<(head->roll))
		{
			nu->next=head;
			head->back=nu;
			head=nu;
			return head;
		}
		else
		{
			
		while(((nu->roll)>(temp->roll))&&(temp->next))
		{
			temp=temp->next;
		}
		if(temp->next)
		{
		nu->back=temp->back;
		nu->next=temp;
		temp->back->next=nu;
		temp->back=nu;
		}
		else
		{	
		nu->back=temp;
		temp->next=nu;

		}

		}
		
return head;

}
