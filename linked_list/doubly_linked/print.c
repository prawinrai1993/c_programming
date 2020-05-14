#include"my_headers.h"


//extern NODE *head;

void print(NODE *head)
{
	NODE *temp=head;
	
	printf("\n %6s %15s %10s %15s\n\n","roll","name","marks","contact");
	while(temp)
	{	
		printf("%6d %15s %10.2f %15s\n",temp->roll,temp->name,temp->marks,temp->contact);
		temp=temp->next;
	}			

	return;


}	
