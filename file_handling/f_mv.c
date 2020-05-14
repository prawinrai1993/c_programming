
#include<stdio.h>

main(int argc, char **argv)
{
FILE *fp1,*fp2,*str;
char ch,choice='y';

if(argc<2)
{
printf("\nERROR:Missing file operand after \"%s\"\n\n",argv[1]);
printf("\nUSAGE_syntax:f_mv  <current_filename> <target_filename>\n\n");
return;
}

if((str=fopen(argv[2],"r")))
{
printf("\nWarning file already exist(overwrite may happen):(y/n): ");
scanf("%c",&ch);
fclose(str);
}




if((choice=='y')||(choice=='Y'))
{
fp1=fopen(argv[1],"r");
fp2=fopen(argv[2],"w");               //new file created if not existing

if(fp1==NULL)
{
printf("\nERROR : WRONG <file_name> SUPPLIED\n");
return;
}

while((ch=fgetc(fp1))!=EOF)
fputc(ch,fp2);


fclose(fp1);

remove(argv[1]);

fclose(fp2);

printf("\n\nFILE renamed SUCCESFULLY\n\n");
}
else
return;
}
