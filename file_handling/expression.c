
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


main(int argc,char **argv)
{
	int cnt=0,l_cnt=0,i=0,j=0,x=0,y=0,flag=0,z[100],val=0,a=0,k;
	FILE *fp=NULL;
	char temp[100][100],ch,symbol[100];

if(argc<2)
{
printf("ERROR :\nUsage SYNTAX: ./solve_expr <file_name>\n");
return;
}

	fp=fopen(argv[1],"r");

if(fp==NULL)
{
printf("ERROR file name SUPPLIED not present in directory\n");
return;
}


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


for(i=0;i<cnt;i++)
{
	for(j=0;j<100;j++)	
{

		
		if(((temp[i][j]>='0')&&(temp[i][j]<='9'))&&(flag==0))	
			x=temp[i][j]-48;

		if((temp[i][j]=='+')||(temp[i][j]=='-')||(temp[i][j]=='*')||(temp[i][j]=='/'))
	{
			symbol[a]=temp[i][j];
			flag=!flag;
	}
		if(((temp[i][j]>='0')&&(temp[i][j]<='9'))&&(flag==1))
	{
			y=temp[i][j]-48;
			flag=!flag;
	}
	
}

for(k=0;k<1;k++)
{
if(symbol[a]=='+')
z[a]=x+y;

else if(symbol[a]=='-')
z[a]=x-y;

else if(symbol[a]=='*')
z[a]=x*y;

else if(symbol[a]=='/')
z[a]=x/y;
a++;
}



}


//printf("   %c    %c   %c   %c.......................",symbol[0],symbol[1],symbol[2],symbol[3]);



a=0;


//printf("%d  %d %d %d",z[0],z[1],z[2],z[3]);

	for(i=0;i<100;i++)
	for(j=0;j<100;j++)
	if(temp[i][j]=='\n')
	{
		temp[i][j]='=';
		temp[i][j+1]=z[a++]+48;
		temp[i][j+2]='\n';
		break;
	}


//printf("x=%d     y=%d  symbol=%c  z=%d\n",x,y,symbol,z);
//printf("%s",temp[0]);

fclose(fp);

fp=fopen(argv[1],"w");


for(i=0;i<cnt;i++)
fputs(temp[i],fp);

fclose(fp);


printf("\n\nExpressions Evaluated Succesfully!!!!!!!!!!!\n\n");


}


