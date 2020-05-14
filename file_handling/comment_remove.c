#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
FILE *fp=NULL;
char *buf=NULL,ch;
int i,x,y,cnt=0,flag=0,l_cnt=1,flag_c=0;

if(argc<2)
{
printf("file_name not supplied\n");
printf("Usage_syntax: ./comment <file_name>");
return;
}


fp=fopen(argv[1],"r");

if(fp==NULL)
{
printf("file not present in directory\n\n");
return;
}

while((ch=fgetc(fp))!=EOF)
{
buf=(char *)realloc(buf,sizeof(char)*(cnt+1));
buf[cnt]=ch;
cnt++;
}

//for(i=0;i<cnt;i++)
//printf("%c",buf[i]);


	for(i=0;i<cnt;i++)
{
		
		if(buf[i]=='\n')
		l_cnt++;

/*
	if((buf[i]=='/')&&((buf[i+1]!='/')||(buf[i-1]!='*')||(buf[i+1]!='*')))
	{
		printf("syntax error: line no. %d expected before /\n",l_cnt);
		return;
	}
*/
		if(((buf[i]=='/')&&(buf[i+1]=='/')&&(flag==0)))
	{
		flag=1;
		x=i;
	}
		if((flag==1)&&(buf[i]=='\n'))
	{

		flag=0;
		y=i;
		memmove(buf+x,buf+y,sizeof(char)*(cnt-y));
		cnt=cnt-(y-x);
		buf[cnt]='\0';
	}
	
		if(((buf[i]=='/')&&(buf[i+1]=='*')&&(flag_c==0)))
	{
		flag_c=1;
		x=i;
	}
		if((flag_c==1)&&(buf[i]=='*')&&(buf[i+1]=='/'))
	{

		flag_c=0;
		y=i;
		memmove(buf+x,buf+y+2,sizeof(char)*(cnt-y));
		cnt=cnt-(y-x);
		buf[cnt]='\0';
	}
}

fclose(fp);

fp=fopen(argv[1],"w");
fputs(buf,fp);

fclose(fp);
printf("\n\ncomments removed successfully!!!!!!!!!!!!!!!!\n\n");

}

