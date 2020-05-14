#include<stdio.h>
#include<string.h>
#include<termios.h>

main()
{

struct termios v;

char ch;
tcgetattr(0,&v);
v.c_lflag&=~ICANON;
tcsetattr(0,TCSANOW,&v);

while(1)
{
printf("enter choice:");
scanf("%c",&ch);
switch(ch)
{

case 'a':printf("\n\naaaaaaa\n");
	break;

case 'b':printf("\n\nbbbb\n");
	break;

case 'c':printf("\n\nccccc\n");
	break;

default:printf("\n\ninvalid input!!!!!!!\n\n");


}






}






}
