#include<stdio.h>

main(int argc, char **argv)
{
FILE *fp1,*fp2;
char ch;

if(argc<2)
{
printf("\nERROR:file_name not supplied\n");
printf("\nUSAGE_syntax:./f_cpy <source_filename> <target_filename>\n");
return;
}

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
fclose(fp2);

printf("\n\nFILE COPIED SUCCESFULLY\n\n");
}
