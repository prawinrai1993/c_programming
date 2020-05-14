#include<stdio.h>


main(int argc,char **argv)
{
FILE *fp;
char ch;
if(argc<2)
{
	printf("\nERROR:file_name NOT supplied\n");
	printf("\nUSAGE_syntax:./file_read <file_name>\n");
	return;
}

fp=fopen(argv[1],"r");
if(fp==NULL)
{
	printf("\nERROR:Wrong filename supplied\n");
	return;
}

while((ch=fgetc(fp))!=EOF)
	fputc(ch,stdout);



fclose(fp);



}
