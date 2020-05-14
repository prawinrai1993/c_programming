#include<stdio.h>

main()
{
char ch;


printf("enter character: ");
scanf("%c",&ch);

if(ch>='A'&&ch<='Z')
ch|=(1<<5);
else if(ch>='a'&&ch<='z')
ch&=~(1<<5);

printf("%c............\n\n",ch);


}


