#include<stdio.h>


void xstrcpy(char * s2,const char * s1)
{
int i;
for(i=0;s1[i];i++)
{

s2[i]=s1[i];

}
s2[i]='\0';

}
