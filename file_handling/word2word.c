#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(int argc,char **argv)
{
	FILE *fp1=NULL,*fp2=NULL,*fp3=NULL;
	char *temp1=NULL,*temp2=NULL,ch1,ch2;
	int i=0,j=0,x=0,size=0,cnt=0,flag=0;
if(argc<4)
{
printf("ERROR :syntax <./word2word> <file_1> <file_2> <target_file>");
return;

}


fp1=fopen(argv[1],"r");

	if(fp1==NULL)
	{
		printf("ERROR:File_1 not present on disk\n");
		return;
	}
fp2=fopen(argv[2],"r");

		if(fp2==NULL)
	{
		printf("ERROR:File_2 not present on disk\n");
		return;
	}
fp3=fopen(argv[3],"w");

		if(fp3==NULL)
	{
		printf("ERROR:File_2 not present on disk\n");
		return;
	}

fseek(fp1,0,2);
size=ftell(fp1);
//printf("%d",size);
fseek(fp1,0,0);
temp1=calloc(1,size+1);
fread(temp1,size,1,fp1);

//for(i=0;i<size;i++)
//printf("%c",temp1[i]);


fseek(fp2,0,2);
size=ftell(fp2);
//printf("%d",size);
fseek(fp2,0,0);
temp2=calloc(1,size+1);
fread(temp2,size,1,fp2);


//for(i=0;i<size;i++)
//printf("%c",temp2[i]);

while((temp1[i]!='\0')&&(temp2[j]!='\0'))
	{
		if(flag==0)
		for(x=i;temp1[x];x++)
		{	
			i++;
			if((temp1[x]=='\n')||(temp1[x]==' '))
			{
			flag=1;
			break;
			}
			fprintf(fp3,"%c",temp1[x]);
			
		}
		
		if(flag==1)
		for(x=j;temp2[x];x++)
		{	
			j++;
			if((temp2[x]=='\n')||(temp2[x]==' '))
			{
			flag=0;
			break;
			}
			fprintf(fp3,"%c",temp2[x]);
			
		}


	}

if(temp1[i]=='\0')
for(x=j;temp2[x]!='\0';x++)
if((temp2[x]!='\n')&&(temp2[x]!=' '))
fprintf(fp3,"%c",temp2[x]);


if(temp2[j]=='\0')
for(x=i;temp1[x]!='\0';x++)
if((temp1[x]!='\n')&&(temp1[x]!=' '))
fprintf(fp3,"%c",temp1[x]);

fclose(fp1);
fclose(fp2);
fclose(fp3);



}
