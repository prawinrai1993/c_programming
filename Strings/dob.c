#include<stdio.h>
#include<strings.h>

main()
{
	float res;
	int fpart=0,ipart=0,i=0,iflag=0,fflag=0,x;
	char str[100];
	printf("enter double value: ");
	gets(str);

	

while(str[i]&&(str[i]!='.'))
{
	ipart=ipart*10;
	x=str[i]-48;
	ipart=ipart+x;
	if((str[i]<'0')||(str[i]>'9'))
	{
	iflag=1;
	break;
	}	
	i++;
}
i++;
if(iflag==0)
while(str[i]&&(str[i]!='.'))
{
	fpart=fpart*10;
	x=str[i]-48;
	fpart=fpart+x;
	if((str[i]<'0')||(str[i]>'9'))
	{
	fflag=1;
	break;
	}	
	i++;
}

if(iflag!=0)
{
res=0;
printf("res=%f",res);
return;
}
if((iflag==0)&&(fflag!=0))
{
res=(float)ipart;
printf("res=%f",res);
return;
}
if((iflag==0)&&(fflag==0))
{
res=(float)fpart/1000000;
res=res+(float)ipart;
printf("res=%f",res);
return;
}





}
