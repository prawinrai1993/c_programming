#include<stdio.h>
#include<stdlib.h>
#include<string.h>


main(int argc,char **argv)
{
	FILE *fp=NULL;
	char **str=NULL,*temp,ch;
	int cnt=0,i=0,j=0;

if(argc<2)
{
printf("usage error: <./sort> <filename> ");
return 0;
}

fp=fopen(argv[1],"r");


str=(char **)realloc(str,sizeof(char *)*(cnt+1));
str[cnt]=NULL;

while((ch=fgetc(fp))!=EOF)
{
str[cnt]=(char *)realloc(str[cnt],sizeof(char)*(i+1));
//str[cnt]=NULL;
str[cnt][i]=ch;
i++;
if(ch=='\n')
{
str[cnt]=(char *)realloc(str[cnt],sizeof(char)*(i+1));
str[cnt][i]='\0';
cnt++;
i=0;
str=(char **)realloc(str,sizeof(char *)*(cnt+1));
str[cnt]=NULL;
}
}

fclose(fp);
for(j=0;j<cnt;j++)
{
for(i=j;i<cnt;i++)
{
	if((strlen(str[i]))<(strlen(str[j])))
	{
	temp=str[j];
	str[j]=str[i];
	str[i]=temp;
	}

}
}

fp=fopen(argv[1],"w");
for(i=0;i<cnt;i++)
fputs(str[i],fp);

fclose(fp);
}





