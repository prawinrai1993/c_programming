#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(int argc, char **argv)
{
FILE *fp1=NULL,*fp2=NULL;
char ch,**buf=NULL,**temp=NULL,*ptr=NULL,str[10],path[40]="/home/v15he6p3/include/";
int i=0,s=0,cnt=0,j=9,k=0,x=0,temp_cnt=0,flag=0;


if(argc<2)
{
printf("file_name not supplied!!!!!!!!!");
printf("Usage_syntax: ./a.out <file_name>");
return;

}

fp1=fopen(argv[1],"r");
fp2=fopen("backup","w");


		if(fp1==NULL)
		{
		printf("FILE not present on disk!!!!!!!!!!\n");
		return;
		}


			buf=(char **)realloc(buf,sizeof(char *)*(cnt+1));
			buf[cnt]=NULL;


	while((ch=fgetc(fp1))!=EOF)
	{

	buf[cnt]=(char *)realloc(buf[cnt],sizeof(char)*(i+1));
	buf[cnt][i]=ch;
	i++;
	

		if(ch=='\n')
		{
		buf[cnt]=(char *)realloc(buf[cnt],sizeof(char)*(i+1));
		buf[cnt][i]='\0';
		cnt++;
		buf=(char **)realloc(buf,sizeof(char *)*(cnt+1));
		buf[cnt]=NULL;
		i=0;
		}	


	}


//for(i=0;i<cnt;i++)
//printf("%s",buf[i]);

			fclose(fp1);

for(i=0;i<cnt;i++)
{
	ptr=buf[i];
	j=9;
	x=0;
	temp_cnt=0;
	//fp1=NULL;

		if(ptr=strstr(ptr,"#include"))
		{
			if(*(ptr+8)=='<')
			{
				flag=1;
				for(k=0;k<10;k++)
				{
					if(*(ptr+j)!='>')
					{
					str[k]=*(ptr+j);
					j++;
					str[k+1]='\0';
					}

				}
			}
			
			else if(*(ptr+8)=='"')
			{
				flag=0;
				for(k=0;k<10;k++)
				{
					if(*(ptr+j)!='"')
					{
					str[k]=*(ptr+j);
					j++;
					str[k+1]='\0';
					}

				}
			}



			for(k=23,s=0;k<40,str[s];k++,s++)
			{
			path[k]=str[s];
			path[k+1]='\0';
			}

//	printf("%s",path);
//			printf("%s\n",str);
			if(flag==0)
			fp1=fopen(str,"r");
			else if(flag==1)
			fp1=fopen(path,"r");

		if(fp1==NULL)
		{
		printf("ERROR:file not present in directory!!!!!!!!!!!!!\n");
		return;
		}

			
		temp=(char **)realloc(temp,sizeof(char *)*(temp_cnt+1));
		temp[temp_cnt]=NULL;
	
		while((ch=fgetc(fp1))!=EOF)
		{

		temp[temp_cnt]=(char *)realloc(temp[temp_cnt],sizeof(char)*(x+1));
		temp[temp_cnt][x]=ch;
		x++;
	

			if(ch=='\n')
			{
			temp[temp_cnt]=(char *)realloc(temp[temp_cnt],sizeof(char)*(x+1));
			temp[temp_cnt][x]='\0';
			temp_cnt++;
			temp=(char **)realloc(temp,sizeof(char *)*(temp_cnt+1));
			temp[temp_cnt]=NULL;
			x=0;
			}	
			

		}

		fclose(fp1);
		
		buf=(char **)realloc(buf,sizeof(char *)*(cnt+temp_cnt));
		memmove(buf+i+temp_cnt,buf+i+1,sizeof(char *)*(cnt-i-1));
		memmove(buf+i,temp,sizeof(char *)*temp_cnt);
		cnt=cnt+temp_cnt-1;
		free(temp);
		temp=NULL;
		}
			
	

}


//for(k=0;k<cnt;k++)
//printf("%s",buf[k]);

fp1=fopen(argv[1],"w");
for(k=0;k<cnt;k++)
fputs(buf[k],fp1);

fclose(fp1);

printf("\nfiles included successfully!!!!!!!!!!!!!!!!!!!!!!!\n\n");

}
