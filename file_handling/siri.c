#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	int i=0,cnt=0,flag=0;
	char *buff=NULL,ch;
	FILE *fp=NULL;

	fp=fopen(argv[1],"r");

	while((ch=fgetc(fp))!=EOF)
	{
		buff=(char *)realloc(buff,(sizeof(char)*cnt));
		buff[cnt]=ch;
		cnt++;
	}


	fclose(fp);

	for(i=0;i<cnt;i++)
	{
		if(flag==0)
		{
			if((buff[i]>='A') && (buff[i]<='Z'))
				buff[i]=buff[i]-32;
			flag=1;
		}
		else if(flag==1)
		{
			if((buff[i]>='a') && (buff[i]<='z'))
				buff[i]=buff[i]-32;
			flag=0;
		}
	}

	fp=fopen(argv[1],"w");
	for(i=0;i<cnt;i++)
		fputc(buff[i],fp);

	fclose(fp);

}
