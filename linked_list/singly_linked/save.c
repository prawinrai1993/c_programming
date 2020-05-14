#include"my_headers.h"


//extern NODE *head;
NODE * save_data(NODE *head)
{
FILE *fp=NULL;
NODE *temp=NULL;
fp=fopen("data.dat","w");
	if(fp==NULL)
	{
	printf("file not exist on disk!!!!!!!!!!\n");
	return;
	}


temp=head;

	while(temp)
	{
	fwrite(temp,sizeof(NODE),1,fp);
	temp=temp->link;
	}

fclose(fp);

printf("data saved succesfully!!!!!!!!!!!!\n");
return head;

}
