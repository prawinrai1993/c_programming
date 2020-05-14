#include<stdio.h>
#include<stdlib.h>
int enter(int *marks,int);
void print(int *marks,int);
void highest(int *marks,int);
void lowest(int *marks,int);
void save_data(int *marks);
void update_database(int *marks);
main()
{
int marks[20],n,i,rand_var,max=-1,index,min=101;
char choice;

n=sizeof(marks)/sizeof(marks[0]);
while(1)
{
printf("****************menu****************\n\n");
printf("'e/E' :Enter random constant for a random list of marks.\n");
printf("'p/P' :Print list of marks entered\n'h/H': Highest marks obtained\n");
printf("'l/L' :Lowest marks obtained.\n't/T' :Terminate program\n's/S :Save_data\n\n'");

//update_database(marks);

printf("\nenter choice:");
scanf("%c",&choice);
if(choice>=98)
choice=choice-32;

switch(choice)
{

case 'E':enter(marks,n);
	break;
case 'P':print(marks,n);
	break;
case 'H':highest(marks,n);
	break;

case 'L':lowest(marks,n);
	break;

case 'T':printf("Terminating Program!!!!!!!!!!!!\n\n");
	exit(0);
	break;
//case 'S':save_data(marks);
//	break;

default :printf("invalid Choice entered!!!!!!!!!!!!!\n\n\n");

}
while(getchar()!=10);

}


}

void save_data(int *marks)
{

FILE *fp=NULL;
fp=fopen("data","w");
fwrite(marks,sizeof(marks),1,fp);
printf("data updated succesfully");



}

void update_database(int *marks)
{

FILE *fp=NULL;
fp=fopen("data","r");
fread(marks,sizeof(marks),1,fp);
printf("data updated succesfully");

}

int enter(int *marks,int n)
{
int i;
	srand(time(0));
		for(i=0;i<n;i++)
	{
		marks[i]=rand()%101;
	}

}


void print(int *marks,int n)
{
int i;
	for(i=0;i<n;i++)
	{
		printf("StudentNo. %d    marks=%d\n",i+1,marks[i]);

	}


}



void highest(int *marks,int n)
{
int index,i,max=-1;
	for(i=0;i<n;i++)
	{
		if(max<marks[i])
		{
			max=marks[i];
			index=i;
		}
	}
	printf("StudentNo. %d   highest_marks=%d\n\n",index+1,max);

}



void lowest(int *marks,int n)

{
int i,min=101,index;
	for(i=0;i<n;i++)
	{
		if(min>marks[i])
		{
		min=marks[i];
		index=i;
		}
	}
	printf("StudentNo. %d   lowest_marks=%d\n\n",index,min);

}
