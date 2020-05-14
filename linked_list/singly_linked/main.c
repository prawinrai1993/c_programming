#include"my_headers.h"


NODE * autosave_data(NODE *head);

NODE *head=NULL;


void f(int n)
{

	head=(NODE *)autosave_data(head);
	alarm(10);
}

main()
{
char choice;

head=(NODE *)update_database(head);

signal(SIGALRM,f);
alarm(10);
//for canonical input behavior/////////////////////
/*
struct termios v;

char ch;
tcgetattr(0,&v);
v.c_lflag&=~ICANON;
tcsetattr(0,TCSANOW,&v);
*/
////////////////////////////////////////
while(1)
{
printf("\n>>>>>>>>>>>>>>>>>>>>>>menu<<<<<<<<<<<<<<<<<<<<<<\n");
printf("\n'i' : INPUT\n'p' : PRINT\n'd' : DELETE\n's' : SAVE_DATA\n'r' : REVERSE\n'q' : QUIT\n");

printf("Enter choice from above : ");
scanf("%c",&choice);
switch(choice)
{
case 'i':head=(NODE *)input(head);
	break;
case 'p':print(head);
	break;
case 'd':head=(NODE *)delete(head);
	break;
case 's':head=(NODE *)save_data(head);
	break;
case 'r':head=(NODE *)reverse(head);
	break;
case 'q':quit(head);
	printf("\n\nquiting database application!!!!!!!!!!!\n\n");
	return;
default:printf("\nInvalid choice !!!!!!!!!\n\n\n");

}

while(getchar()!='\n');
}
}

