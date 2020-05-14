#include"my_headers.h"


//extern NODE *head;

NODE * update_database(NODE *head)
{
int cnt,i;
NODE *nu=NULL,*temp=head;
FILE *fp=NULL;
fp=fopen("data.dat","r");
if(fp==NULL)
{
return;
}
fseek(fp,0,SEEK_END);
cnt=ftell(fp)/sizeof(NODE);
printf("%d",cnt);

fseek(fp,0,SEEK_SET);
	for(i=0;i<cnt;i++)
	{
		nu=calloc(1,sizeof(NODE));	
		fread(nu,sizeof(NODE),1,fp);	
	if(head==NULL)
		{
			nu->next=NULL;
			head=nu;
		}
	else
		{
			head->next=nu;
			nu->back=head;
			nu->next=NULL;
		}	


	}
	/*for(i=0;i<cnt;i++)
	{
		nu=calloc(1,sizeof(NODE));	
		fread(nu,sizeof(NODE),1,fp);	
	if(head==NULL)
		{
			nu->next=NULL;
			head=nu;
			nu->back=NULL;
		}
	else if((nu->roll)<(head->roll))
		{
			nu->next=head;
			head->back=nu;
			head=nu;
		}
		else
		{
			
		while((temp)&&((nu->roll)>(temp->roll))&&(temp->next))
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
	else if(temp && !(temp->next))
	{
		nu->back=temp;
		temp->next=nu;

	}
	}
}*/
return head;

}
