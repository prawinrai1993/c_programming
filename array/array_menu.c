#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input(char *str);
int highest(char *str);
int lowest(char *str);


main()
{
char choice;
char str[20],temp[20];
int i;
while(1)
//for(i=0;i<3;i++)
{
printf("****************menu************************\n\n");
printf("\n\ni/I:Input\np/P:Print\nh/H:Highest\nl/L:Lowest\nq/Q:quit\n\n");
printf("enter choice:");
choice=getchar();
//scanf(" %c",&choice);
if((choice>='A')&&(choice<='Z'))
choice=choice+32;
while(getchar()!='\n');
switch(choice)
{
case 'i' :printf("enter string:");
//	getchar();
//	__fpurge(stdin);
	gets(str);
//	strcpy(temp,str);
//	printf("%d\n",getchar());
//	while(getchar()!='\n');
//	scanf(" %s",str);
//	scanf("%[^\n]s",str);
//	getchar();		
//	fgets(str,20,stdin);
//	for(i=0;i<=strlen(str);i++)
//	printf("%d\n",str[i]);
//	printf("\nchar=%d\n",strlen(str));
//	str[strlen(str)-1]='\0';
//	puts(str);
	 break;

case 'p' : //puts(str);
	   //fputs(str,stdout);
	 printf("%s\n",str);
	break;

case 'h' : printf("highest char=%c\n",highest(str));
	 break;

case 'l' : printf("lowest char=%c\n",lowest(str));
	 break;
	
case 'q' : exit(0);

default : printf("invalid choice given!!!!!!!!!!!!!!!\n\n");

}
//while(getchar()!='\n');
}

}




int highest(char *str)
{
char temp='a';
int i=0;
while(str[i]!='\0')
{
	if(temp<=str[i])
	temp=str[i];
	i++;
}
	return temp;
}


int lowest(char *str)
{
char temp='z';
int i=0;
while(str[i]!='\0')
{
	if(temp>=str[i])
	temp=str[i];
	i++;
}
	return temp;

}
