#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{

FILE *fp1=NULL,*fp2=NULL;
char ch,*temp=NULL,*backup=NULL;
int num,i,j,l_cnt=0,l_cnt_backup=0,cnt=0,cnt_backup=0,a=0,size_fp2;

if(argc<4)
{
printf("ERROR:Usage_syntax <./insert> <target_file> <line_number> <source_file>\n\n");
return;
}


fp1=fopen(argv[1],"r");


fp2=fopen(argv[3],"r");

if((fp1==NULL)||(fp2==NULL))
{
printf("ERROR Filename NOT supplied correctly\n\n");
return;
}


	num=atoi(argv[2]);


	while((ch=fgetc(fp1))!=EOF)
	{
	temp=realloc(temp,(cnt+1)*sizeof(char));
	temp[cnt]=ch;

	if(ch=='\n')	
	l_cnt++;

	cnt++;

	}
//	temp[cnt-1]='\n';

	while((ch=fgetc(fp2))!=EOF)
	{
	backup=realloc(backup,(cnt_backup+1)*sizeof(char));
	backup[cnt_backup]=ch;

	if(ch=='\n')	
	l_cnt_backup++;

	cnt_backup++;
	}
//	backup[cnt_backup-1]='\n';

fseek(fp1,0,SEEK_SET);


//fseek(fp2,0,SEEK_END);
//size_fp2=ftell(fp2);

fseek(fp2,0,SEEK_SET);
printf("hIIIIIIIIIIIIIIIIIIIiiiiiiiiiiiiiiiii\n\n");
	for(i=0;i<cnt;i++)
	printf("%c",temp[i]);

printf("hIIIIIIIIIIIIIIIIIIIiiiiiiiiiiiiiiiii\n\n");
	for(i=0;i<cnt_backup;i++)
	printf("%c",backup[i]);


printf("hIIIIIIIIIIIIIIIIIIIiiiiiiiiiiiiiiiii\n\n");


for(i=0;i<cnt;i++)
{
	if(temp[i]=='\n')
		a++;

	if(a==num)
{	
	temp=realloc(temp,(cnt+cnt_backup)*sizeof(char));

	memmove(temp+i+cnt_backup,temp+i+1,sizeof(char)*(cnt_backup));
	memmove(temp+i,backup,sizeof(char)*(cnt_backup));
	break;	

}

	
}


fclose(fp1);
fclose(fp2);


fp1=fopen(argv[1],"w");

fputs(temp,fp1);

fclose(fp1);

}
