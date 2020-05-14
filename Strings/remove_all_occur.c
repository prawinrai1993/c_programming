
#include<stdio.h>
#include<string.h>
main()
{
char s1[100],s2[100],temp[100],*ptr;
int i,j;

printf("input s1:");
gets(s1);

printf("\ninput s2:");
gets(s2);


ptr=s1;
while(ptr=strstr(ptr,s2))
{

memmove(ptr,ptr+strlen(s2),strlen(ptr));

ptr++;

}
printf("\n\n\n%s\n\n",s1);

}
