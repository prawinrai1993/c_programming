#include"my_headers.h"

//extern NODE *head;

void quit(NODE *head)
{
char ch;
getchar();
printf("do you want to save data before exit(y/n): ");
scanf("%c",&ch);

if(ch=='y')
head=save_data(head);

return ;


}
