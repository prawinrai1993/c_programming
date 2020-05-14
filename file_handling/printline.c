
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc, char **argv)
{
FILE *fp1=NULL;
char ch,temp[100];
int l_cnt=1,i=0;
char *ptr=NULL;
int x=0,y=0,z=0,flag=0,flag_c=0,a=0;
if(argc<2)
	{
	printf("\nERROR:file_name not supplied\n");
	printf("\nUSAGE_syntax:./print_line line no. <target_filename>\n");
	return;
	}

strcpy(temp,argv[1]);


for(i=0;temp[i];i++)
{

	if(flag==1)
	flag_c=1;

	if(temp[i]=='-')
	flag=1;

	if(((temp[i]>='0')&&(temp[i]<='9'))&&(flag==0))
	{
	z=temp[i]-48;
	x=(x*10)+z;
	}
	else if(((temp[i]>='0')&&(temp[i]<='9'))&&(flag_c==1))
	{
	z=temp[i]-48;
	y=(y*10)+z;
	}

}


	fp1=fopen(argv[2],"r");              


	if(fp1==NULL)
	{
	printf("\nERROR : WRONG <file_name> SUPPLIED\n");
	return;
	}

	while((ch=fgetc(fp1))!=EOF)
	{
	
		if((l_cnt>=x)&&(l_cnt<=y))
		if((a<=(y-x)))
		{
		printf("%c",ch);	
		}
	if(ch=='\n')
{
	l_cnt++;	
	a++;
}
	
	}

printf("\n\n");
}
