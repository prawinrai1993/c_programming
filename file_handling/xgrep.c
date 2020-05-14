#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
int i=0,cnt=0;
char **buf=NULL,*ptr=NULL,ch;
FILE *fp;

	if(argc<3)
	{
		printf("ERROR: filename not supplied\n");
		printf("Usage :./xgrep <pattern> <filename>\n");
		return;
	}

fp=fopen(argv[2],"r");

	if(fp==NULL)
	{
		printf("error :file_name supplied does not exist\n");
		return;
	}

buf=(char **)realloc(buf,(cnt+1)*sizeof(char *));
buf[cnt]=NULL;

	while((ch=fgetc(fp))!=EOF)
	{	
		buf[cnt]=(char *)realloc(buf[cnt],(sizeof(char ))*(i+1));
		buf[cnt][i]=ch;
		i++;
		if(ch=='\n')
		{
			buf[cnt]=(char *)realloc(buf[cnt],sizeof(char )*(i+1));
			buf[cnt][i]='\0';
			cnt++;
			buf=(char **)realloc(buf,(cnt+1)*sizeof(char *));
			buf[cnt]=NULL;
			i=0;	
		}


	}
fclose(fp);

	for(i=0;i<cnt;i++)
	{
	ptr=buf[i];
		if(ptr=strstr(ptr,argv[1]))
			printf("%s",buf[i]);

	}

}
