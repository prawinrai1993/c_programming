#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
int i=0,cnt=0,x,y,z;
char **buf=NULL,*ptr=NULL,ch;
FILE *fp;

if(argc<4)
{
printf("ERROR: filename not supplied\n");
printf("Usage :./replace <pattern_source> <pattern_target> <filename>\n");
		return;
}

x=strlen(argv[1]);
y=strlen(argv[2]);


fp=fopen(argv[3],"r");

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
	z=strlen(buf[i]);
//	printf("\n%d",z);
		if(ptr=strstr(ptr,argv[2]))
		{
		if((*(ptr-1)==' ')&&(*(ptr+y)==' '))
		{
			if(x<=y)
			memmove(ptr,argv[1],sizeof(char)*x);
			else if(y<x)
			{
			//buf[i]=(char *)realloc(buf[i],sizeof(char)*(z+(x-y)+5));
			memmove(ptr+x+1,ptr+y+1,sizeof(char)*(strlen(ptr+y+1)));
			memmove(ptr,argv[1],sizeof(char)*x);
			}
		}
		}


	}
fp=fopen(argv[3],"w");
for(i=0;i<cnt;i++)
fputs(buf[i],fp);

fclose(fp);


}
