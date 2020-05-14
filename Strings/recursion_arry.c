#include<stdio.h>
#include<string.h>
reverse(char *s1);
main()
{
char s1[10];
printf("enter a string to reverse:");
gets(s1);
printf("reverse string : ");
reverse(s1);
//printf("%s",reverse(s1));
printf("\n\n");
}


reverse(char *s1)
{

if(*s1)
reverse(s1+1);
printf("%c",*s1);


}
