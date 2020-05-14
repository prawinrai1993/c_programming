#include<stdio.h>
#include<string.h>

main(int argc,char **argv)

{
FILE *fp=NULL;
int arr[10]={10,20,30,467,578,6987,453,256,890,786};
int i;

if(argc<2)
printf("error :file name not supplied\n\n");


fp=fopen(argv[1],"a");

if(fp==NULL)
printf("error :file name not supplied\n\n");


for(i=0;i<10;i++)
fprintf(fp,"%d\n",arr[i]);

fclose(fp);


}


