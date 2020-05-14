#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(int argc,char **argv)
{
FILE *fp1=NULL,*fp2=NULL;

float x=0,y=0,z=0;
int i=0,lcnt=0;
char ch,symbol;

if(argc<2)
{
printf("FILE Name not supplied");
return;
}

fp1=fopen(argv[1],"r");
fp2=fopen("backup","w");

if(fp1==NULL)
{
printf("file Not found on disk!!!!!!!!!!");
return;
}

while((ch=fgetc(fp1))!=EOF)
{

if(ch=='\n')
lcnt++;
}

fseek(fp1,0,SEEK_SET);

while(i!=lcnt)
{

fscanf(fp1,"%f %c %f",&x,&symbol,&y);



switch(symbol)
{
case '+':z=x+y;
	break;
case '-':z=x-y;
	break;
case '*':z=x*y;
	break;
case '/':z=x/y;
	break;
}




fprintf(fp2,"%f %c %f = %f\n",x,symbol,y,z);
i++;
}

fclose(fp1);
fclose(fp2);




fp2=fopen("backup","r");



fp1=fopen(argv[1],"w");               //new file created if not existing


while((ch=fgetc(fp2))!=EOF)
fputc(ch,fp1);


fclose(fp2);

remove("backup");

fclose(fp1);


printf("\n\nall expressions evaluated succesfully!!!!!!!!!!!!!\n\n");
}

