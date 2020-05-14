
#include<stdio.h>
#include<string.h>
main(int argc, char **argv)
{
FILE *fp1=NULL;
char ch,temp[1000];
int l_cnt=1,i=0;
int flag=0;
char *ptr=0;
if(argc<2)
	{
	printf("\nERROR:file_name not supplied\n");
	printf("\nUSAGE_syntax:./search \"pattern\" <target_filename>\n");
	return;
	}

	fp1=fopen(argv[2],"r");              


	if(fp1==NULL)
	{
	printf("\nERROR : WRONG <file_name> SUPPLIED\n");
	return;
	}

	while((ch=fgetc(fp1))!=EOF)
	{

		if(!(ch=='\n'))
		{	
		temp[i]=ch;
		i++;
		}
		else if(ch=='\n')
		{
		temp[i]='\0';		
		i=0;	
		flag=1;
		}




	if(flag==1)
{
	ptr=temp;
	while(ptr=strstr(ptr,argv[1]))
	{
	printf("line=%d  FOUND  \n",l_cnt);
	ptr++;
	}

	flag=0;
}
if(ch=='\n')
l_cnt++;

}
fclose(fp1);


printf("\n\nFILE search SUCCESFULLY done\n\n");
}
