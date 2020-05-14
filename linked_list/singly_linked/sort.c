#include"my_headers.h"

NODE * sort(NODE *head)
{
int cnt=0,i,j;
NODE * temp=head,*swap=NULL;


while(temp)
{
	temp=temp->link;
	cnt++;
}
temp=head;

for(i=0;i<cnt;i++)
for(j=i+1;j<cnt;j++)
{
	
if(temp->link->link)
{

	if(temp->roll <  temp->link->roll )
	{
		swap->link=temp->link;
		temp->link=temp->link->link;
		temp->link=swap->link;
	}
}
else
break;
temp=temp->link;

}
return head;

}
