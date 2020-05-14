#include<stdio.h>

int xitoa(int,char *,int);
char * xftoa(float);
main()
{
char *p;
float f;
scanf("%f",&f);
p=xftoa(f);

printf("%s",p);

}

char * xftoa(float num)
{
	static char p[10];
	int ipart,i,afterpoint=6;
	float fpart;
ipart=(int)num;
fpart=num-(float)ipart;

i=xitoa(ipart,p,0);

	if(afterpoint!=0)
	{
	p[i]='.';
	fpart=fpart*1000000;
	xitoa((int)fpart,p,i+1);
	}
return p;
}

int xitoa(int num,char *p,int y)
{
	int cnt=0,i,x=num;

while(x)
{
x=x/10;
cnt++;
}
p[cnt+y]='\0';
	for(i=(cnt-1+y);num;i--)
	{
		p[i]=(num%10)+48;		
		num=num/10;
	
	}
return cnt;
}
