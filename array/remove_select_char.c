#include<stdio.h>
#include<string.h>
main()
{
char str[20],ch,*ptr;

printf("\nenter a string: ");
//scanf("%s",str);
gets(str);
while(1)
{
printf("\ninput a char for removal from string: ");
//scanf("%c",ch);
ch=getchar();

if(!(ptr=strchr(str,ch)))
printf("\n\nNo char found in string!!!!");


while(ptr=strchr(str,ch))
{
if(ptr!=NULL)
{
//printf("found at index=%d\n\n",ptr-str);
memmove(ptr,ptr+1,strlen(ptr+1)+1);

}
}


printf("\n\nafter removal of char:%s\n\n",str);


getchar();
}
}
