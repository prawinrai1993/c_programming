#include"my_headers.h"

NODE * reverse(NODE * head)
{

NODE *temp=head;


while(temp->next)
{
temp=temp->next;
head->next=head->back;
head->back=temp;
//if(temp!=NULL)
head=temp;
}
head->next=head->back;
head->back=temp;

return head;
}
