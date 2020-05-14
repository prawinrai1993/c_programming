#include<stdio.h>
#include<string.h>
main()
{
char str[20],ch,*ptr;

printf("\nenter a string: ");
//scanf("%s",str);
gets(str);

printf("\ninput a char for removal from string: ");
//scanf("%c",ch);
ch=getchar();



ptr=strchr(str,ch);

if(ptr==NULL)
{
printf("No char found in string!!!!\n\n");

}
else
{
printf("found at index=%d\n\n",ptr-str);

}

}
