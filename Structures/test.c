#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct test{


}node;


struct A{
int a1;
float a2;
};

struct C
{
int c1;
float c2;
struct A a;

struct {
int b1;
float b2;
}b;

}c;

void input(struct C *p);
void print(struct C *p);
main()
{
//printf("%d.....................\n",sizeof(node));
char choice;
struct C c;
while(1)
{
printf("\n******************menu********************\n");
printf("\ni/I: input\np/P: print\nq/Q: quit\n\n");
printf("enter a choice:");
scanf("%c",&choice);
while(getchar()!='\n');
if((choice>='A')&&(choice<='Z'))
choice+=32;

//printf("%d\n",sizeof(struct C));

switch(choice)
{
case 'i': input(&c);
	break;
case 'p': print(&c);
	break;
case 'q': exit(0);
	
default: printf("invalid choice entered !!!!!!!!\n");

}

}
}



void input(struct C *p)
{
printf("enter int data: ");
scanf("%d %d %d",&(p->a.a1),&(p->b.b1),&(p->c1));

printf("enter real data: ");
scanf("%f %f %f",&(p->a.a2),&(p->b.b2),&(p->c2));

getchar();
}


void print(struct C *p)
{

printf("entered int data: ");
printf("%d %d %d",(p->a.a1),(p->b.b1),(p->c1));

printf("\n\nentered real data: ");
printf("%f %f %f",(p->a.a2),(p->b.b2),(p->c2));



}
