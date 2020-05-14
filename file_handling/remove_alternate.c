#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
FILE *fp;
int i=0,cnt=0,flag=0;
char **temp=NULL,ch;


fp=fopen(argv[1],"r");

if(fp==NULL)
{
printf("ERROR: File not present on disk!!!!!!!!!!!!!\n");
return;
}



temp=(char **)realloc(temp,sizeof(char *)*(cnt+1));
temp[cnt]=NULL;


while((ch=fgetc(fp))!=EOF)
{

temp[cnt]=(char *)realloc(temp[cnt],sizeof(char)*(i+1));
temp[cnt][i]=ch;
i++;
		if(ch=='\n')
		{
			cnt++;
			temp=(char **)realloc(temp,sizeof(char *)*(cnt+1));
			temp[cnt]=NULL;
			i=0;
		}

}

fclose(fp);

//for(i=0;i<cnt;i++)
//printf("%s",temp[i]);

	for(i=0;i<cnt;i++)
	{	
		
		if(flag==0)
		{
		memmove(temp+i,temp+i+1,sizeof(char *)*(cnt-i-1));
		cnt--;
		}
		flag!=flag;
	}

fp=fopen(argv[1],"w");

for(i=0;i<cnt;i++)
fputs(temp[i],fp);


fclose(fp);

printf("removed alternate lines succesfully!!!!!!!!!!!!!!!!!!!!!!\n\n");

}
