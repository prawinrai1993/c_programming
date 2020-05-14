#include<stdio.h>
#include<string.h>

main(int argc, char **argv)
{

	FILE *fp=NULL;
	int i,line_del,l_cnt=0,cnt=0,z=0,x=0,y=0,flag=0,flag_c=0;
	char **temp=NULL,ch,str[5];

	if(argc<3)
	{
		printf("file name not supplied\nUsage_syntax:./remove_line <line_number> <file name>\n\n");
		return;
	}


	strcpy(str,argv[1]);

	for(i=0;str[i];i++)
	{

		if(flag==1)
			flag_c=1;

		if(str[i]=='-')
			flag=1;

		if(((str[i]>='0')&&(str[i]<='9'))&&(flag==0))
		{
			z=str[i]-48;
			x=(x*10)+z;
		}
		else if(((str[i]>='0')&&(str[i]<='9'))&&(flag_c==1))
		{
			z=str[i]-48;
			y=(y*10)+z;
		}

	}
printf("%d %d",x,y);

	fp=fopen(argv[2],"r");

	if(fp==NULL)
	{
		printf("ERROR file not present\n\n");
		return;
	}

	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')	
		l_cnt++;
	}

	fseek(fp,0,SEEK_SET);

	while(cnt<l_cnt)
	{	

		temp=(char **)realloc(temp,(cnt+1)*sizeof(char *));
		temp[cnt]=NULL;
		temp[cnt]=(char *)realloc(temp[cnt],100*sizeof(char ));
		fgets(temp[cnt],100,fp);
		cnt++;
	}
	//cnt--;
	for(i=0;i<cnt;i++)
	printf("%s",temp[i]);


	memmove(temp+x-1,temp+y,sizeof(char *)*(cnt-y));
	cnt=cnt-(y-x)-1;
	puts("hie...................");
	fclose(fp);
	//for(i=0;i<cnt;i++)
	//printf("%s",temp[i]);



	fp=fopen(argv[2],"w");
	for(i=0;i<cnt;i++)
		fputs(temp[i],fp);


	fclose(fp);
	printf("LINES DELETED SUCCESFULLY\n\n");


}
