#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<termios.h>
typedef struct student
{
int roll;
char name[10];
char address[20];
float marks;
char contact[10];
struct student *link;

}NODE;


