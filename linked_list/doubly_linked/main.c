#include"my_headers.h"



main()
{
char choice;

NODE *head=NULL;
head=(NODE *)update_database(head);
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
printf("\n'i' : INPUT\n'p' : PRINT\n'd' : DELETE\n's' : SAVE_DATA\n'q' : QUIT\n'r' : REVERSE\n'a' : DELETE_all\n");

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
case 'r':head=(NODE *)reverse(head);
	break;
case 's':head=(NODE *)save_data(head);
	break;
case 'a':head=(NODE *)delete_all(head);
	break;
case 'q':quit(head);
	printf("\n\nquiting database application!!!!!!!!!!!\n\n");
	return;
default:printf("\nInvalid choice !!!!!!!!!\n\n\n");

}

while(getchar()!='\n');
}
}

