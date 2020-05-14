#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<termios.h>
#pragma pack(1)
struct student
{
char *name;
char *contact;
int roll;
char *address;

	struct ID{
	char *org;
unsigned int year :4;
	char *loc;
	char *course;
unsigned int batch :4; 
	char *initial;
unsigned int seq :8;
	}id;

	struct DOB{
	unsigned int date :5;
	unsigned int month :4;
	unsigned int year :15;
	}dob;

};

int cnt=0;

void * enter_data(struct student *stu);
void  print_data(struct student *stu);
char * getastring(char *name);
char * getacontact(char *contact);
void find_data(struct student *stu);
void del_data(struct student *stu);
void sort_data(struct student *stu);
char* getaddress(char *address);
int passwd();
main()
{
//	struct DOB *dob;
//	struct ID *id;
	struct student *stu=NULL;
	char choice;


while(passwd());
	
while(1)
{

printf("\n\n.............****************menu******************...............\n\n");
printf("e/E: enter data\np/P: print data\nd/D: Delete data\ns/S: Sort data\nf/F: find data\nq/Q: quit\n\n");

printf("enter choice:");
scanf("%c",&choice);
while(getchar()!='\n');

if((choice>='A')&&(choice<='Z'))
choice+=32;


switch(choice)
{
	case 'e':stu=enter_data(stu);
		break;
	
	case 'p':print_data(stu);
		break;
	case 'f':find_data(stu);
		break;
	case 'd':del_data(stu);
		break;
	case 's':sort_data(stu);
		break;
	case 'q':printf("\n\nquiting database application!!!!!!!!\n\n\n") ;
		exit(0);

	default:printf("\ninvalid choice entered!!!!!!!!\n\n"); 



}
}

}

int passwd()
{
	static char passwd[20]; 
	static char saved[20]={'p','a','s','s','w','d','\0'};
	struct termios v;
	int i=0;
	tcgetattr(0,&v);
	v.c_lflag&=~ECHO;
	v.c_lflag&=~ICANON;
	tcsetattr(0,TCSANOW,&v);
while(1)
{
	printf("\nenter passwd: ");
	i=0;
	do 
	{
	scanf("%c",&passwd[i]);
	printf("*");
	i++;
	}while(passwd[i-1]!='\n');
	passwd[i-1]='\0';

	if(strcmp(passwd,saved)==0)
	break;

	printf("\n\npassword entered wrong!!!!!!!!!!!!!!!\n\n");

}

	v.c_lflag|=ECHO;
	v.c_lflag|=ICANON;
	tcsetattr(0,TCSANOW,&v);
return 0; 
}


char* getastring(char *name)
{
int i=0;

int x,y;

srand(time(0));


x=rand()%10+4;
do
{

	if(rand()%2)
	y=65;
	else
	y=97;
	name=(char *)realloc(name,(i+1)*sizeof(char));
	name[i]=rand()%26+y;
	i++;
	}while(i<x);

	name[i-1]='\0';
	return name;
}



char* getaddress(char *address)
{
int i=0;

int x,y;

srand(time(0));


x=rand()%5+15;
do
{

	if(rand()%2)
	y=65;
	else
	y=97;
	address=(char *)realloc(address,(i+1)*sizeof(char));
	address[i]=rand()%26+y;
	i++;
	}while(i<x);

	address[i-1]='\0';
	return address;

}

char* getacontact(char *contact)
{
int i=0;

int x;

srand(time(0));

do
{

	contact=(char *)realloc(contact,(i+1)*sizeof(char));
	contact[i]=rand()%9+48;
	i++;
	}while(i<10);

	contact[i-1]='\0';
	return contact;
}




void * enter_data(struct student *stu)
{

	stu=(struct student *)realloc(stu,(cnt+1)*sizeof(struct student));
	if(stu==NULL)
	printf("MEMORY FULL!!!!!!\n\n");

	srand(time(0));
//	printf("\nenter roll number:");
	stu[cnt].roll=rand()%50+1;
	stu[cnt].name=NULL;
//	printf("\nenter name: ");
	stu[cnt].name=getastring(stu[cnt].name);
//	printf("\nenter contact: ");
	
	stu[cnt].contact=NULL;	
	stu[cnt].contact=getacontact(stu[cnt].contact);	
//	printf("\nenter address: ");
	
	stu[cnt].address=NULL;
	stu[cnt].address=getaddress(stu[cnt].address);
//	printf("\nenter date of birth: ");
	
	stu[cnt].dob.date=rand()%31+1;
	stu[cnt].dob.month=rand()%12+1;
	stu[cnt].dob.year=rand()%13+1980;
//	printf("\nenter vector ID: ");
//	printf("\nenter organisation: ");
	stu[cnt].id.org=NULL;
	stu[cnt].id.org=getastring(stu[cnt].id.org);
//	printf("\nenter current year: ");
	stu[cnt].id.year=rand()%16+1;	
//	printf("\nenter location: ");	
	stu[cnt].id.loc=NULL;	
	stu[cnt].id.loc=getastring(stu[cnt].id.loc);	
//	printf("\nenter course: ");
	stu[cnt].id.course=NULL;
	stu[cnt].id.course=getastring(stu[cnt].id.course);
//	printf("\nenter batch: ");
	stu[cnt].id.batch=rand()%15+1;
//	printf("\nenter initial: ");
	stu[cnt].id.initial=NULL;	
	stu[cnt].id.initial=getastring(stu[cnt].id.initial);	
//	printf("enter sequence:\n ");
	stu[cnt].id.seq=rand()%50+1;
	cnt++;

	return stu;
}

void print_data(struct student *stu)
{

	int i;
printf("%5s %15s %15s %20s %10s %10s\n\n","roll","name","contact","address","DOB","ID");
	for(i=0;i<cnt;i++)
	{
printf("%5d %15s %15s %20s     %2d/%2d/%2d",stu[i].roll,stu[i].name,stu[i].contact,stu[i].address,stu[i].dob.date,stu[i].dob.month,stu[i].dob.year);

printf("     %c%d%c%c%d%c%d\n",stu[i].id.org[0],stu[i].id.year,stu[i].id.loc[0],stu[i].id.course[0],stu[i].id.batch,stu[i].id.initial[0],stu[i].id.seq);

	}
}




void find_data(struct student *stu)
{
	char *temp=NULL;
	int i=0,x=0;
	printf("enter data to find(name or contact no.): ");
	do
	{
	temp=realloc(temp,(i+1)*sizeof(char));
	temp[i]=getchar();
	i++;
	}while(temp[i-1]!='\n');
	temp[i-1]='\0';


printf("%5s %15s %15s %15s %10s %10s\n\n","roll","name","contact","address","DOB","ID");
	for(i=0;i<cnt;i++)
	{
		if((strstr(stu[i].name,temp))||(strstr(stu[i].contact,temp)))
		{
	
printf("%5d %15s %15s %15s     %2d/%2d/%2d",stu[i].roll,stu[i].name,stu[i].contact,stu[i].address,stu[i].dob.date,stu[i].dob.month,stu[i].dob.year);

printf("     %c%d%c%c%d%c%d\n",stu[i].id.org[0],stu[i].id.year,stu[i].id.loc[0],stu[i].id.course[0],stu[i].id.batch,stu[i].id.initial[0],stu[i].id.seq);

	x++;
		}

	}
if(x==0)
printf("NAME NOT found!!!!!!!!!!!\n\n");
}



void del_data(struct student *stu)
{
char *temp=NULL;
int i=0,j,x=0;
printf("enter data to delete: ");
	do
	{
	temp=realloc(temp,(i+1)*sizeof(char));
	temp[i]=getchar();
	i++;
	}while(temp[i-1]!='\n');
	temp[i-1]='\0';


printf("%5s %15s %15s %15s %10s %10s\n\n","roll","name","contact","address","DOB","ID");

for(i=0;i<cnt;i++)
{
if(strstr(stu[i].name,temp))
	{

printf("%5d %15s %15s %15s     %2d/%2d/%2d",stu[i].roll,stu[i].name,stu[i].contact,stu[i].address,stu[i].dob.date,stu[i].dob.month,stu[i].dob.year);

printf("     %c%d%c%c%d%c%d\n",stu[i].id.org[0],stu[i].id.year,stu[i].id.loc[0],stu[i].id.course[0],stu[i].id.batch,stu[i].id.initial[0],stu[i].id.seq);

	x++;
	}
}
if(x==0)
printf("no data found as entered:");

if(x!=0)
	{
	printf("\n\nenter roll no to delete:");
	scanf("%d",&j);
	for(i=0;i<cnt;i++)
	if(stu[i].roll==j)
	memmove(stu+i,stu+i+1,(cnt-i-1)*sizeof(struct student));

	cnt--;
	
	}
printf("\n\ndata deletion done sucessfully!!!!!!\n\n");
getchar();

}



void sort_data(struct student *stu)
{
int i,j;
struct student temp[1];

for(i=0;i<cnt;i++)
for(j=i+1;j<cnt;j++)
{
if(strcmp(stu[i].name,stu[j].name)>0)
{
memmove(temp,stu+i,sizeof(struct student));
memmove(stu+i,stu+j,sizeof(struct student));
memmove(stu+j,temp,sizeof(struct student));
}

}
printf("\n\ndata sorted succesfully\n\n");

}



