
#include"my_headers.h"


NODE * input(NODE *head)
{

NODE *nu=NULL,*cur=NULL,*pre=NULL;


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
	pre=head;
	cur=head;

	if(head==NULL)
		{
			nu->link=NULL;
			head=nu;
			return head;
		}
	else if((nu->roll)<(head->roll))
		{
			nu->link=head;
			head=nu;
			return head;
		}
		else
		{
			
		while((cur)&&((cur->roll)<(nu->roll)))
		{	pre=cur;
			cur=pre->link;
		}
		nu->link=cur;
		pre->link=nu;

		}
		
return head;

}
