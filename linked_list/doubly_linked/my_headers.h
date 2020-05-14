#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<termios.h>
typedef struct student
{
struct student *back;
int roll;
char name[20];
float marks;
char contact[20];
struct student *next;

}NODE;


