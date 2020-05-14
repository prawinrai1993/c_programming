#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
	FILE *fp=NULL;
	char **buf=NULL,*temp=NULL,ch;
	int l_cnt=0,cnt=0,i,j;

	if(argc<2)
	{
	printf("ERROR:<file_name> not supplied\n");
	return;
	}	

fp=fopen(argv[1],"r");

	if(fp==NULL)
	{
	printf("filename supplied does not exist\n");
	return;
	}

while((ch=fgetc(fp))!=EOF)
	{
	if(ch=='\n')
	l_cnt++;
	}
fseek(fp,0,SEEK_SET);


for(i=0;i<l_cnt;i++)
{
buf=(char **)realloc(buf,(cnt+1)*sizeof(char *));
buf[cnt]=0;
buf[cnt]=(char *)realloc(buf[cnt],100*sizeof(char));
fgets(buf[cnt],100,fp);

cnt++;
}
cnt--;
fclose(fp);

//for(i=0;i<cnt;i++)
//printf("%s",buf[i]);

//        puts(buf[0]);

for(i=0;i<=cnt;i++)
{
       temp=buf[i];
	for(j=0;temp[j];j++)
		{

		if(temp[0]==' ')
		memmove(temp,temp+1,strlen(temp+1)+1);		

		  if((temp[j]==' ')&&(temp[j+1]==' '))
		     {
		          memmove(temp+j,temp+j+1,strlen(temp+j+1)+1);
			   j--;
		      }
//		printf("%d\n",strlen(temp+j));
	//	printf("%c",temp[j]);
		}

}


fp=fopen(argv[1],"w");

for(i=0;i<=cnt;i++)
fputs(buf[i],fp);

printf("\n\nblank spaces removed succesfully!!!!!!!!!\n\n");


}

