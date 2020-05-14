#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<termios.h>
#define max 20
char*** input_data(char ***names);
void print_data(char ***names);
void find_name(char ***names);
void delete_name(char ***names);
void edit_name(char ***names);
void sort_name(char ***names);
char * getstr(char *names);
char ** getAstring(char **names);

int cnt=0;

main()
{
char ***names=NULL,choice;
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
case 'i':names=input_data(names);
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
char * getstr(char *names)
{
int i=0;
do
	{
	names=(char*)realloc(names,(i+1)*sizeof(char));

	names[i]=getchar();

	i++;
	}while(names[i-1]!='\n');
	names[i-1]='\0';

	return names;
}



char **getAstring(char **names)
{
int i=0;



	names=(char **)realloc(names,(i+1)*sizeof(char*));
	printf("\n\nenter name(max 20 char valid):");

	//scanf("%[^\n]s",names[cnt]);
	names[i]=NULL;
	names[i]=getstr(names[i]);
	i++;

	names=(char **)realloc(names,(i+1)*sizeof(char*));


	printf("\n\nenter contact(max 20 char valid):");
	//scanf("%[^\n]s",names[cnt]);
	names[i]=NULL;
	names[i]=getstr(names[i]);
	


return names;
}




char *** input_data(char ***names)
{
names=(char ***)realloc(names,(cnt+1)*sizeof(char*));

names[cnt]=NULL;
//names[cnt]=realloc(names[cnt],(cnt+1)*sizeof(char*));
names[cnt]=getAstring(names[cnt]);



cnt++;
return names;

}



void print_data(char ***names)
{

int i,j;

	for(i=0;i<cnt;i++)
	printf("\n%d>  name  %20s      contact  %20s",i+1,names[i][0],names[i][1]);
}





void find_name(char ***names)
{
char *temp=NULL,*ptr;
int i=0,v=0;
printf("\n\nenter name to find: ");
do
{

temp=realloc(temp,(i+1)*sizeof(char));
temp[i]=getchar();
i++;
}while(temp[i-1]!='\n');
temp[i-1]='\0';

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


void delete_name(char ***names)
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



void edit_name(char ***names)
{
char *tempname=NULL,*tempcontact=NULL;
int j,i;
if(cnt==0)
	printf("\n No data to edit\n");
else
	{
	print_data(names);
	printf("\n\nenter name no. to edit from above list:");
	scanf("%d",&j);
	while(getchar()!='\n');
	printf("\n\nenter new name data:");
i=0;
do
{
tempname=realloc(tempname,(i+1)*sizeof(char));
tempname[i]=getchar();
i++;
}while(tempname[i-1]!='\n');
tempname[i-1]='\0';

	printf("\n\nenter new contact data:");

i=0;
do
{
tempcontact=realloc(tempcontact,(i+1)*sizeof(char));
tempcontact[i]=getchar();
i++;
}while(tempcontact[i-1]!='\n');
tempcontact[i-1]='\0';

	strcpy(names[j-1][0],tempname);
	strcpy(names[j-1][1],tempcontact);
	}
printf("\n\nediting name done succesfully\n");
}



void sort_name(char ***names)
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





