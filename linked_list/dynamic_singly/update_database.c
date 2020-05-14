#include"my_headers.h"


//extern NODE *head;

NODE * update_database(NODE *head)
{
int cnt,i;
NODE *nu=NULL;
FILE *fp=NULL;
fp=fopen("data.dat","r");
fseek(fp,0,SEEK_END);
cnt=ftell(fp)/sizeof(NODE);
fseek(fp,0,SEEK_SET);
	for(i=0;i<cnt;i++)
	{
		nu=malloc(sizeof(NODE));	
		fread(nu,sizeof(NODE),1,fp);	
	if(head==NULL)
		{
			nu->link=NULL;
			head=nu;
		}
	else
		{
			nu->link=head;
			head=nu;
		}	


	}

return head;

}
