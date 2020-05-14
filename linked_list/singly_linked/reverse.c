#include"my_headers.h"

NODE * reverse(NODE * head)
{

NODE *cur=head,*pre=head->link,*next=pre->link,*first=head;

while((cur)&&(pre))
	{
	if(cur==head)
		head->link=NULL;

		pre->link=cur;
		cur=pre;
	if(next)
		pre=next;
	else
	{
		head=pre;
		pre=NULL;
	}
	if(next)
		next=next->link;

	}

return head;
}
