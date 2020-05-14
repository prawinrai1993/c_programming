#include"my_headers.h"

//extern NODE *head;
NODE * delete(NODE *head)
{

	NODE *cur=NULL,*pre=NULL;
	int roll2delete;

	if(head==NULL)
	{
	return;
	}

printf("enter roll no. to delete : ");
scanf("%d",&roll2delete);
//printf("\n\n%d\n\n",roll2delete);
	cur=head;
//	pre=head;
	if((head->roll)==roll2delete)
         {
        	head=head->link;
      	 	free(cur);
		printf("data deleted succesfully!!!!!!!\n");
         	return head;
         }


	while((cur)&&((cur->roll)!=roll2delete))
	{
	pre=cur;
	cur=cur->link;
	}

	if(cur==NULL)
	{
		printf("roll number not found!!!!!!!!!!!!!\n");
		return;
	}
	pre->link=cur->link;

	free(cur);
         
printf("data deleted succesfully!!!!!!!!!!!!!\n");
return head;

}
