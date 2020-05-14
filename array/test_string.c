#include<stdio.h>
#include<string.h>
main()
{
char str[20];
int i=10;


printf("enter string:");
gets(str);

//fgets(str,20,stdin);


for(i=0;str[i];i++)
{
printf("value%d=%d  ",i,str[i]);

}
printf("\ncount=%d",i);

printf("\n\n%s\n\n",str);



}
