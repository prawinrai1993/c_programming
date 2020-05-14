#include"my_headers.h"

NODE * delete_all(NODE * head)

{

while(head&&head->next)
{
head=head->next;
free(head->back);
}
free(head);
head=0;

printf("all nodes deleted succesfully!!!!!!!\n\n");
return head;
}
