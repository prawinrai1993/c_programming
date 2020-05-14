#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
	FILE *fp=NULL;
	char *temp=NULL,*str=NULL,ch;
	int cnt,i=0,x=0,j=0,y=0;
	if(argc<4)
	{
	printf("ERROR: syntax <./replace> <target> <to_replace> <file_name>\n");
	return;
	}
fp=fopen(argv[3],"r");

if(fp==NULL)
{
	printf("file not present on disk\n\n");
	return;
}




while((ch=fgetc(fp))!=EOF)
	{
		temp=(char *)realloc(temp,sizeof(char)*(i+1));		
		temp[i++]=ch;

	}
temp[i]='\0';

for(j=0;j<i;j++)
printf("%c",temp[j]);

x=strlen(argv[1]);
y=strlen(argv[2]);

fclose(fp);

str=temp;
while(str=strstr(str,argv[1]))
{
	if((str[-1]==' ')&&(str[x]==' '))
{	
	if(y>x)
	cnt++;
}		
	str++;
}

	temp=(char *)realloc(temp,(i+((y-x)*cnt)));
	i=((y-x)*cnt);

str=temp;

while(str=strstr(str,argv[1]))
{
	if(((str[-1]==' ')&&(str[x]==' '))||((str[-1]=='\n')&&(str[x]='\n')))
{	
	if(y>x)
{
	memmove(str+y,str+x,strlen(str)+1);
	
	memmove(str,argv[2],strlen(argv[2]));
}

}
	str++;
}


for(j=0;temp[j];j++)
printf("%c",temp[j]);
	
fp=fopen(argv[3],"w");

fputs(temp,fp);

fclose(fp);


}
