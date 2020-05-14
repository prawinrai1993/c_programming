#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
	int cnt=0,l_cnt=0,i=0,j=0;
	FILE *fp=NULL;
	char temp[100][100],ch,sort[100];
	char l_choice[3]="-l",a_choice[3]="-a";

if(argc<3)
printf("ERROR :\nUsage SYNTAX: ./sort_line  <options>  <file_name>\n<options> -l length -a alpha");



	fp=fopen(argv[2],"r");

if(fp==NULL)
printf("ERROR file name SUPPLIED not present in directory\n");

while((ch=fgetc(fp))!=EOF)
{

if(ch=='\n')
l_cnt++;

}

//printf("%d",l_cnt);
	fseek(fp,0,SEEK_SET);
	while(cnt<=l_cnt)
	fgets(temp[cnt++],100,fp);

//	for(i=0;i<cnt;i++)
//	printf("%s",temp[i]);

if(!(strcmp(argv[1],a_choice)))
{
	for(i=0;i<cnt;i++)
	{
		for(j=i+1;j<cnt;j++)
		if((strcmp(temp[i],temp[j]))==1)
	{
		strcpy(sort,temp[i]);
		strcpy(temp[i],temp[j]);
		strcpy(temp[j],sort);
	}
	}


}
else if(!(strcmp(argv[1],l_choice)))
{

	for(i=0;i<cnt;i++)
	{
		for(j=i+1;j<cnt;j++)
		if(((strlen(temp[i]))<(strlen(temp[j]))))
	{
		strcpy(sort,temp[i]);
		strcpy(temp[i],temp[j]);
		strcpy(temp[j],sort);
	}
	}

}
else
{
printf("error : wrong option entered\n");

}


//	for(i=0;i<cnt;i++)
//	printf("%s",temp[i]);

	fclose(fp);

fp=fopen(argv[2],"w");

for(i=0;i<cnt;i++)
fputs(temp[i],fp);


fclose(fp);

}

