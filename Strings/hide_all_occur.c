
#include<stdio.h>
#include<string.h>
main()
{
char s1[100],s2[100],temp[100],*ptr;
int i,j;
char star[100];

for(i=0;i<100;i++)
{
star[i]='*';
}


printf("input s1:");
gets(s1);

printf("\ninput s2:");
gets(s2);

strcpy(temp,s1);

ptr=temp;
while(ptr=strstr(ptr,s2))
{

memmove(ptr,star,strlen(s2));

ptr++;

}

printf("\n\n\n%s\n\n\n",temp);

}

