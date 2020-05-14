
#include<stdio.h>

main(int argc, char **argv)
{
FILE   *fp1;//,*fp2;
char ch;
int w_cnt=0,l_cnt=0,c_cnt=0;
int flag=0,c_flag=0;

if(argc<1)
{
printf("\nERROR:file_name not supplied\n");
printf("\nUSAGE_syntax:./f_wc <filename>\n\n");
return;
}

fp1=fopen(argv[1],"r");
//fp2=fopen(argv[2],"w");               //new file created if not existing


if(fp1==NULL)
{
printf("\nERROR : WRONG <file_name> SUPPLIED\n");
return;
}
while((ch=fgetc(fp1))!=EOF)
{

if((!((ch==' ')||(ch=='\n'))))//||(ch==','))
c_flag=1;
else if((c_flag==1)&&(flag==0))
flag=1;


if(flag==1)
if(((ch==' ')||(ch=='\n')))
{
w_cnt++;
flag=0;
c_flag=0;
}

cd if((ch=='\n'))
l_cnt++;


//if(!((ch==' ')||(ch=='\n')))
c_cnt++;

}


fclose(fp1);
//fclose(fp2);
printf("%d  %d  %d  %s\n",l_cnt,w_cnt,c_cnt,argv[1]);
}
