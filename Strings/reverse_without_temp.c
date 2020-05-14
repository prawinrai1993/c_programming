#include<stdio.h>
#include<string.h>


main()
{
char str[1000];
int i,j;
printf("enter a string: ");
scanf("%[^\n]s",str);


for(i=0,j=strlen(str)-1;i<j;i++,j--)
str[i]^=str[j]^=str[i]^=str[j];



printf("reverse string:%s.......\n ",str);





}
