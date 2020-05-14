
#include"my_headers.h"



//extern NODE *head;
char* getastring(char *name)
{
int i=0;
char ch;
	do
	{

	name=(char *)realloc(name,(i+1)*sizeof(char));
	ch=getchar();
	name[i]=ch;
	i++;
	}while(name[i-1]!='\n');

	name[i-1]='\0';
	return name;
}

NODE * input(NODE *head)
{

NODE *nu=NULL,*cur=NULL,*pre=NULL;


nu=malloc(sizeof(NODE));
printf("\nenter roll no.: ");
scanf("%d",&(nu->roll));
getchar();
printf("\nenter name: ");
//nu->name=NULL;
//nu->name=getastring(nu->name);
gets(nu->name);
printf("\nenter contact: ");
gets(nu->contact);
printf("\nenter address: ");
//nu->address=NULL;
//nu->address=getastring(nu->address);
gets(nu->address);
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
