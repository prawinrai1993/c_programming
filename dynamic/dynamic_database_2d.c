#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<termios.h>
//#define max 20
void * input_data(char **names);
void print_data(char **names);
void find_name(char **names);
void * delete_name(char **names);
void edit_name(char **names);
void sort_name(char **names);
void * getAstring(char *names);

int cnt=0;

main()
{
char **names=NULL,choice;
int rows,cols;
//for canonical input behavior/////////////////////

struct termios v;

char ch;
tcgetattr(0,&v);
v.c_lflag&=~ICANON;
tcsetattr(0,TCSANOW,&v);

////////////////////////////////////////
//rows=sizeof(names)/sizeof(*names);
//cols=sizeof(*names)/sizeof(**names);
while(1)
{

printf("\n\n************************menu***************************\n\n");
printf("i/I: Input\np/P: print\nf/F: find\nd/D: delete\ne/E: edit\ns/S: sort\nq/Q: quit");

printf("\n\nenter choice:");
choice=getchar();
if((choice>='A')&&(choice<='Z'))
choice=choice+32;
//while(getchar()!='\n');

switch(choice)
{
case 'i':names=input_data(names);
	break;

case 'p':print_data(names);
	break;

case 'f':find_name(names);
	break;

case 'd':names=delete_name(names);
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


void * getAstring(char *names)
{
int i=0;

printf("enter a string: ");
do
{
names=realloc(names,i+1);
names[i]=getchar();
i++;

}while(names[i-1]!='\n');
names[i-1]='\0';

return names;

}




void * input_data(char **names)
{	
	
	names=(char**)realloc(names,(cnt+1)*sizeof(char *));
	names[cnt]=NULL;
	names[cnt]=getAstring(names[cnt]);
	cnt++;
	return names;

}



void print_data(char **names)
{
int i;

if(cnt==0)
printf("\nNo data present\n\n");

for(i=0;i<cnt;i++)
printf("\n%20s          name %d",names[i],i+1);

}


void find_name(char **names)
{
char *temp=NULL,*ptr;
int i=0,v=0;
printf("\n\nenter name to find: ");

do 
{
temp=realloc(temp,i+1);
temp[i]=getchar();
i++;

}while(temp[i-1]!='\n');
temp[i-1]='\0';

for(i=0;i<cnt;i++)
{
if(strstr(names[i],temp))
	{
	printf("found %20s        name %d\n",names[i],i+1);
	v++;
	}
}
	if(v==0)
	printf("\n\nNo matching name found\n\n");


}
void *delete_name(char **names)
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

	memmove(names+j-1,names+j,(cnt-j)*sizeof(char*));
	cnt--;
	names=realloc(names,(cnt)*sizeof(char *));
	}
printf("\nname deletion done succesfully\n\n");
return names;
}



void edit_name(char **names)
{
char *temp=NULL;
int j,i=0;
if(cnt==0)
	printf("\n No data to edit\n");
else
	{
	print_data(names);
	printf("\n\nenter name no. to edit from above list:");
	scanf("%d",&j);
	while(getchar()!='\n');
	printf("\n\nenter new data:");
do
{
temp=realloc(temp,i+1);
temp[i]=getchar();
i++;
}while(temp[i-1]!='\n');
temp[i-1]='\0';

//free(names[j-1]);

	strcpy(names[j-1],temp);

	}

printf("\nname editing done succesfully\n\n");
}


void sort_name(char **names)
{
char temp[20];
int i,j;
if(cnt==0)
printf("\n\nNo data to sort\n");

for(i=0;i<cnt;i++)
	for(j=i+1;j<cnt;j++)
		{
		if(strcmp(names[i],names[j])==0);
		else if(strcmp(names[i],names[j])==1)
		{
		strcpy(temp,names[j]);
		strcpy(names[j],names[i]);
		strcpy(names[i],temp);
		}
		else if(strcmp(names[i],names[j])==-1);
		}
printf("\n data after sorting\n");

print_data(names);

}


