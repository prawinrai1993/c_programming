#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void input(int (*marks)[10],int rows,int cols);
void print(int (*marks)[10],int rows,int cols);
void highest(int (*marks)[10],int rows,int cols);
void lowest(int (*marks)[10],int rows,int cols);
void fail_marks(int (*marks)[10],int rows,int cols);


main()
{
int i,j,rows,cols;
char choice;
int marks[20][10];


rows=sizeof marks/sizeof *marks;
cols=sizeof *marks/sizeof **marks;

while(1)
{
printf("\n\n*********************student database program*********************\n\n");
printf("i/I: input random marks\np/P: print marks of all students\nh/H: Student with Highest marks\nl/L: Student with lowest marks\nf/F: how many subjects failing\nq/Q: quit\n");

printf("enter choice:");
scanf("%c",&choice);
if((choice>='A')&&(choice<='Z'))
choice=choice+32;

switch(choice)
{
case 'i':input(marks,rows,cols);
	break;

case 'p':print(marks,rows,cols);
	break;

case 'h':highest(marks,rows,cols);
	break;

case 'l':lowest(marks,rows,cols);
	break;

case 'f':fail_marks(marks,rows,cols);
	break;

case 'q':exit(0);
	break;

default:printf("\n\nInvalid Input!!!!!!!!!!!!!!!\n\n");
}

while(getchar()!='\n');
}

}





void input(int (*marks)[10],int rows,int cols)
{
int i,j;
srand(time(0));

for(i=0;i<rows;i++)
for(j=0;j<cols;j++)
marks[i][j]=rand()%81+20;

}




void print(int (*marks)[10],int rows,int cols)
{
int i,j;
for(i=0;i<rows;i++,printf("\tstudent %d\n",i))
for(j=0;j<cols;j++)
printf("%4d",marks[i][j]);

}


void highest(int (*marks)[10],int rows,int cols)
{
int i,j,index,highest=0,temp;


for(i=0;i<rows;i++)
{
temp=0;
for(j=0;j<cols;j++)
{
temp=marks[i][j]+temp;
if(highest<temp)
{
highest=temp;
index=i;
}
}
}

printf("\n\nhighest marks obtained by student: %d   marks: %d/1000\n",index+1,highest);
}



void lowest(int (*marks)[10],int rows,int cols)
{
int i,j,index,lowest=1001,temp;


for(i=0;i<rows;i++)
{
temp=0;
for(j=0;j<cols;j++)
temp=marks[i][j]+temp;

if(lowest>temp)
{
lowest=temp;
index=i;
}
}

printf("\n\nlowest marks obtained by student: %d   marks: %d/1000\n",index+1,lowest);
}


void fail_marks(int (*marks)[10],int rows,int cols)
{
int i,j,cnt;

for(i=0;i<rows;i++)
{
cnt=0;
for(j=0;j<cols;j++)
{
if(marks[i][j]<40)
cnt++;

}
printf("\nstudent %d failed in %d subjects\n",i+1,cnt);

}


}



