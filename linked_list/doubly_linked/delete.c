#include"my_headers.h"

//extern NODE *head;
NODE * delete(NODE *head)
{

	NODE *temp=head;
	int roll2delete;

	if(head==NULL)
	{
	return;
	}

printf("enter roll no. to delete : ");
scanf("%d",&roll2delete);
	
	if((head->roll)==roll2delete)
         {
        	
		if(head->next)
		{
		head=head->next;
      	 	free(head->back);
		head->back=NULL;
		}
		else
		{
			free(head);
			head=NULL;
		}
		printf("data deleted succesfully!!!!!!!\n");
         	return head;
         }
	else{

	while((temp)&&((temp->roll)!=roll2delete))
	{
	temp=temp->next;
	}

	if(temp==NULL)
	{
		printf("roll number not found!!!!!!!!!!!!!\n");
		return;
	}
	temp->back->next=temp->next;
	if(temp->next)
	temp->next->back=temp->back;
	
	free(temp);
         }
printf("data deleted succesfully!!!!!!!!!!!!!\n");
return head;

}
