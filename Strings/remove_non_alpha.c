#include<stdio.h>
#include<string.h>

main()
{
int i;
char str[100];

printf("input a string:");
//scanf("%[^\n]s",str);
gets(str);
printf("\n\nstring given input:%s\n",str);


for(i=0;str[i];i++)
{

if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z')));
else
{
memmove(str+i,str+(i+1),strlen(str+i+1)+1);
--i;
}
}

printf("\n\nafter removal of non characters:%s\n\n",str);


}
