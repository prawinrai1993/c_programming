#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<termios.h>

struct student
{
char *name;
char *contact;


};

char * getastring(char *p);
void * enter_data(struct student *p);
void print_data(struct student *p);
void find_data(struct student *p);
void *del_data(struct student *p);
void edit_data(struct student *p);

int cnt=0;

main()
{

struct student *v=NULL;
char choice;


while(1)
{
printf("\n*************menu****************\n\n");
printf("i/I: Input data \np/P: Print data\nf/F: Find data\nd/D: Delete data\ne/E: edit data\nq/Q: quit\n\n");
printf("\nenter choice: ");
scanf("%c",&choice);
while(getchar()!='\n');
if((choice>='A')&&(choice<='Z'))
choice+=32;

switch(choice)
{

case 'i':v=enter_data(v);
	break;
case 'p':print_data(v);
	break;
case 'f':find_data(v);
	break;
case 'd':v=del_data(v);
	break;
case 'e':edit_data(v);
	break;

case 'q':printf("\nquiting data base application!!!!!!!!\n\n\n");
	exit(0);
	break;

default:printf("entered option invalid:");

}

}
}
char * getastring(char *p)
{
int i=0;

do 
{
p=(char *)realloc(p,(i+1)*sizeof(char));
p[i]=getchar();
i++;

}while(p[i-1]!='\n');
p[i-1]='\0';
return p;
}


void *enter_data(struct student *p)
{
	p=(char *)realloc(p,(cnt+1)*2*sizeof(char *));
	printf("enter name:");
	p[cnt].name=NULL;
p[cnt].name=getastring(p[cnt].name);
	printf("enter contact no.:");
	p[cnt].contact=NULL;
p[cnt].contact=getastring(p[cnt].contact);
	cnt++;
	return p;
}



void print_data(struct student *p)
{
int i;
printf("       %10s      %10s","name","contact");
for(i=0;i<cnt;i++)
	{
	printf("\n");
	printf("%20s",p[i].name);
	printf("%15s",p[i].contact);
	
	}
}



void find_data(struct student *p)
{
//char *temp=NULL;
char temp[20];

int i,x=0;

i=0;


	printf("   %10s      %10s","name","contact");


/*do
{
temp=realloc(temp,i+1);
temp[i]=getchar();
i++;
}while(temp[i-1]!='\n');
temp[i-1]='\0';
*/

//for canonical input behavior/////////////////////
struct termios attrvar;

char ch;
tcgetattr(0,&attrvar);
attrvar.c_lflag&=~ICANON;
tcsetattr(0,TCSANOW,&attrvar);

////////////////////////////////////////
bzero(temp,20);


printf("enter data to find(name or contact no.): ");
i=0;
//__fpurge(stdin);
/*
do 
{
temp[i]=getchar();

//system("clear");
temp[++i]='\0';

*/

for(i=0;i<20;i++)
{

temp[i]=getchar();
//temp[i++]='\0';
for(i=0;i<cnt;i++)
{
if((strstr(p[i].name,temp))||(strstr(p[i].contact,temp)))
	{
	printf("\n");
	printf("%20s",p[i].name);
	printf("%15s",p[i].contact);
	x++;
	}
}

attrvar.c_lflag|=ICANON;
tcsetattr(0,TCSANOW,&attrvar);

}


if(x==0)
printf("NAME NOT found!!!!!!!!!!!\n\n");
}


void *del_data(struct student *p)
{
	char *temp=NULL;
	int i,j,x=0;
	printf("enter data to delete: ");
	i=0;

	do
	{
	temp=realloc(temp,i+1);
	temp[i]=getchar();
	i++;
	}while(temp[i-1]!='\n');
	temp[i-1]='\0';


	printf("   %10s      %10s","name","contact");
	for(i=0;i<cnt;i++)
	{
	if(strstr(p[i].name,temp))
	{
	
	memmove(p+i,p+i+1,(cnt-i-1)*sizeof(struct student));
	p=realloc(p,(cnt-1)*sizeof(struct student));
	x++;
	}
}
if(x==0)
printf("no data found as entered:");


printf("\n\ndata deletion done sucessfully!!!!!!\n\n");
cnt--;
//getchar();
return p;
}


void edit_data(struct student *p)
{
char *temp=NULL,temp_name[20];
int i=0,x=0;
printf("enter data to edit:");
do
	{
	temp=realloc(temp,(i+1)*sizeof(char));
	temp[i]=getchar();
	i++;
	}while(temp[i-1]!='\n');
	temp[i-1]='\0';

	for(i=0;i<cnt;i++)
		{
		if(strstr(p[i].name,temp))
{
		printf("enter new name:");
		gets(temp_name);
		strcpy(p[i].name,temp_name);
		printf("enter new contact:");
		gets(temp_name);
		strcpy(p[i].contact,temp_name);
		x++;

		break;
}
		}
if(x==0)
printf("wrong entered data for editing!!!!!1\n\n");


if(x!=0)
printf("editing done succesfully!!!!\n");
}

