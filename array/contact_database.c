#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<termios.h>
#define max 20
void input_data(char (*names)[2][20]);
void print_data(char (*names)[2][20]);
void find_name(char (*names)[2][20]);
void delete_name(char (*names)[2][20]);
void edit_name(char (*names)[2][20]);
void sort_name(char (*names)[2][20]);


int cnt=0;

main()
{
char names[20][2][20],choice;
int rows,cols;
//for canonical input behavior/////////////////////
/*
struct termios v;

char ch;
tcgetattr(0,&v);
v.c_lflag&=~ICANON;
tcsetattr(0,TCSANOW,&v);
*/
////////////////////////////////////////
rows=sizeof(names)/sizeof(*names);
cols=sizeof(*names)/sizeof(**names);
while(1)
{

printf("\n\n************************menu***************************\n\n");
printf("i/I: Input\np/P: print\nf/F: find\nd/D: delete\ne/E: edit\ns/S: sort\nq/Q: quit");

printf("\n\nenter choice:");
choice=getchar();
if((choice>='A')&&(choice<='Z'))
choice=choice+32;

while(getchar()!='\n');

switch(choice)
{
case 'i':input_data(names);
	break;

case 'p':print_data(names);
	break;

case 'f':find_name(names);
	break;

case 'd':delete_name(names);
	break;

case 'e':edit_name(names);
	break;

case 's':sort_name(names);
	break;

case 'q':printf("\n\nexiting program!!!!!!!!!!!!!!!!!!!\n\n\n\n");
	exit(0);
	break;

default:printf("\nInvalid option Entered!!!!!!!!!!!!!!!\n\n");

}

}


}



void input_data(char (*names)[2][20])
{
if(cnt>=max)
{
printf("\nmemory full!!!!\n");
return;
}
else
{
printf("\n\nenter name(max 20 char valid):");
//scanf("%[^\n]s",names[cnt]);
gets(names[cnt][0]);

printf("\n\nenter contact(max 20 char valid):");
//scanf("%[^\n]s",names[cnt]);
gets(names[cnt][1]);
cnt++;
}
}



void print_data(char (*names)[2][20])
{
int i;

if(cnt==0)
printf("\nNo data present\n\n");
printf("%5s %15s %25s","<serial no.>","name","<contact no.>");
for(i=0;i<cnt;i++)
	{
	printf("\n%4d  %20s",i+1,names[i][0]);

	printf("\t%20s",names[i][1]);
	}
}


void find_name(char (*names)[2][20])
{
char temp[20],*ptr;
int i,v=0;
printf("\n\nenter name to find: ");
gets(temp);

for(i=0;i<cnt;i++)
{
if(ptr=strstr(temp,names[i][0]))
{
printf("%d>  found %20s ",i+1,names[i][0]);

printf("%20s\n",names[i][1]);
v++;
}
if(ptr=strstr(temp,names[i][1]))
	{
	printf("%d>  found %20s",i+1,names[i][0]);

	printf("%20s\n",names[i][1]);
	v++;
	}
}
if(v==0)
printf("\n\nNo matching name found\n\n");

}


void delete_name(char (*names)[2][20])
{
int j;
if(cnt==0)
printf("\n No data to delete\n");
else
{
	print_data(names);
	printf("\n\nenter name no. to delete from above list:");
	scanf("%d",&j);
	while(getchar()!='\n');

memmove(names+j-1,names+j,(cnt-j)*40);
cnt--;
}

printf("\n\nname deleted succesfully\n\n");
}



void edit_name(char (*names)[2][20])
{
char tempname[20],tempcontact[20];
int j;
if(cnt==0)
	printf("\n No data to edit\n");
else
	{
	print_data(names);
	printf("\n\nenter name no. to edit from above list:");
	scanf("%d",&j);
	while(getchar()!='\n');
	printf("\n\nenter new name data:");
	gets(tempname);
	printf("\n\nenter new contact data:");
	gets(tempcontact);
	strcpy(names[j-1][0],tempname);
	strcpy(names[j-1][1],tempcontact);
	}
printf("\n\nediting name done succesfully\n");
}



void sort_name(char (*names)[2][20])
{
char tempname[20],tempcontact[20];
int i,j;
if(cnt==0)
printf("\n\nNo data to sort\n");

for(i=0;i<cnt;i++)
for(j=i+1;j<cnt;j++)
{
if(strcmp(names[i][0],names[j][0])==0);
else if(strcmp(names[i][0],names[j][0])==1)
{
strcpy(tempname,names[j][0]);
strcpy(names[j][0],names[i][0]);
strcpy(names[i][0],tempname);


strcpy(tempcontact,names[j][1]);
strcpy(names[j][1],names[i][1]);
strcpy(names[i][1],tempcontact);
}
else if(strcmp(names[i][0],names[j][0])==-1);
}
printf("\n data after sorting\n");

print_data(names);

printf("\n\nSort operation done succesfully\n\n");

}





