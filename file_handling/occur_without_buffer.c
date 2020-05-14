#include<stdio.h>
#include<stdlib.h>
#include<string.h>


main(int argc,char **argv)
{
FILE *fp;
char str[20],ch;
int i=0,cnt=0;

fp=fopen(argv[1],"r");


printf("enter string to search: ");
scanf("%s",str);

while((ch=fgetc(fp))!=EOF)
{

	if(ch==str[i])
	{
		i++;
		if(i==strlen(str))
		cnt++;
	}
		if(ch!=str[i-1])
		i=0;

}

printf("count=%d...........\n\n",cnt);
fclose(fp);

}
