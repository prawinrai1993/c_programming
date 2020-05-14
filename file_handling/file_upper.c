
#include<stdio.h>
#include<string.h>
main(int argc, char **argv)
{
FILE *fp1=NULL;
char ch,*temp=NULL,upper[100];
int i=0,j,x;
char *ptr=NULL;
if(argc<2)
	{
	printf("\nERROR:file_name not supplied\n");
	printf("\nUSAGE_syntax:./upper \"pattern\" <target_filename>\n");
	return;
	}

	fp1=fopen(argv[2],"r");              


	if(fp1==NULL)
	{
	printf("\nERROR : WRONG <file_name> SUPPLIED\n");
	return;
	}

for(j=0;argv[1][j];j++)
{
if((argv[1][j]>='a')&&(argv[1][j]<='z'))
upper[j]=argv[1][j]-32;
else
upper[j]=argv[1][j];

}
upper[j]='\0';

	while((ch=fgetc(fp1))!=EOF)
	{


		temp=(char *)realloc(temp,(i+1)*sizeof(char));	
		temp[i]=ch;
		i++;


	}
temp[i]='\0';

//printf("%s\n",temp);
ptr=temp;

	while(ptr=strstr(ptr,argv[1]))
	{
	memmove(ptr,upper,strlen(upper));
	ptr++;
	}

	fclose(fp1);
//printf("%s\n",temp);
	fp1=fopen(argv[2],"w");
	fputs(temp,fp1);
//	fwrite(temp,strlen(temp)+1,1,fp1);
fclose(fp1);


printf("\n\nFILE uppercase SUCCESFULLY done\n\n");
}
