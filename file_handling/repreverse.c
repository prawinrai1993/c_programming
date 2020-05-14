#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{

FILE *fp=NULL;
int wcnt=0,cnt=0,i=0,j=0;
char ch,**buff=NULL,*temp,reverse[100];
if(argc<3)
{
printf("usage error: <./revreplace> <filename> <string2rev>");
return;
}

fp=fopen(argv[1],"r");


buff=realloc(buff,sizeof(char *)*(cnt+1));

while((ch=fgetc(fp))!=EOF)
{
	buff[cnt]=realloc(buff[cnt],sizeof(char)*(i+1));
	buff[cnt][i]=ch;
	i++;
		if(ch=='\n')
	{
		buff[cnt]=realloc(buff[cnt],sizeof(char)*(i+1));
		buff[cnt][i]='\0';
		i=0;
		cnt++;
		buff=realloc(buff,sizeof(char *)*(cnt+1));
	}
}

fclose(fp);

for(i=0;i<cnt;i++)
{
	temp=buff[i];
	while(temp=strstr(temp,argv[2]))
	{
	wcnt++;
	temp++;
	}
}

printf("no of occurence found ........ %d\n\n",wcnt);

if(wcnt>0)
{

int len=strlen(argv[2]);

j=0;
reverse[len]='\0';
for(i=len-1;i>=0;i--)
{
reverse[i]=argv[2][j];

j++;
}

//printf("%s ................\n\n",reverse);



for(i=0;i<cnt;i++)
{
	temp=buff[i];
	while(temp=strstr(temp,argv[2]))
	{
		for(j=0;j<len;j++)
			temp[j]=reverse[j];
	}
}



fp=fopen(argv[1],"w");
for(i=0;i<cnt;i++)
fputs(buff[i],fp);

fclose(fp);


printf("reverse string written to file.......succesfully\n\n");

}
else
printf("no occurence found........\n\n");


}
