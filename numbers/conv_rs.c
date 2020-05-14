#include<stdio.h>
#include"xitoa.c"
#include<string.h>
#include"xftoa.c"
void conv(float);
main()
{

float f;
printf("enter a number: ");
scanf("%f",&f);
conv(f);

}

void conv(float num)
{
int ipart,x,cnt=0,i;
float fpart;
char *ptr,*str;
ipart=(int)num;
fpart=num-(float)ipart;
ptr=xitoa(ipart);
x=strlen(ptr);

for(i=x;i>=0;i--)
{
	if(cnt==3)
	{
		memmove(ptr+i+1,ptr+i,3+1);
		memset(ptr+i,',',1);
	}
	else if(cnt==5)
	{
		memmove(ptr+i+1,ptr+i,5+1);
		memset(ptr+i,',',1);
	}
		cnt++;
}
str=xftoa(fpart);
x=strlen(str);

if(strstr(str,"."))
memmove(str+0,str+1,strlen(str)+1);


printf("amount=%sRs. %sPs.\n\n",ptr,str);

}
