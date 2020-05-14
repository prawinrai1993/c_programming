#include<stdio.h>
#include<string.h>

main()
{
char str[100];
int i;

printf("Input a string:");
scanf("%[^\n]s",str);
for(i=0;str[i];i++)
{


if(str[i]==' ')
{
memmove(str+i,str+(i+2),strlen(str+i+1)+1);
--i;
}
}
}
printf("\n\nstring after removal of blank spaces:%s.....\n\n",str);

}
