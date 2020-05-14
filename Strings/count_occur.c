#include<stdio.h>
#include<string.h>
main()
{
char s1[100],s2[100],*ptr;
int cnt=0;

printf("enter string 1:");
gets(s1);

printf("enter string 2:");
gets(s2);


ptr=s1;

while(ptr=strstr(ptr,s2))
{
ptr++;
cnt++;
}
printf("\n\ncount=%d\n\n",cnt);


}
