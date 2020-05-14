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

if(str[0]==' ')
{
memmove(str+i,str+(i+1),strlen(str+i+1)+1);
--i;
}

else if((str[i-1]!=' ')&&(str[i]==' ')&&(str[i+1]==' '))
{
memmove(str+i,str+(i+1),strlen(str+i+1)+1);
--i;
}
}

printf("\n\nstring after removal of extra blank spaces:%s...\n\n",str);

}
