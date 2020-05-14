#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<termios.h>
#include<signal.h>

typedef struct student
{
	int roll;
	char name[20];
	float marks;
	char contact[20];
	struct student *link;

}NODE;
