#include<stdio.h>

char * xitoa(int);
main()
{
char *p;

p=xitoa(123);

printf("%s",p);



}

char * xitoa(int num)
{
	static char p[10];
	int cnt=0,i,x=num;

while(x)
{
x=x/10;
cnt++;
}
p[cnt]='\0';
	for(i=(cnt-1);i>=0;i--)
	{
		p[i]=(num%10)+48;		
		num=num/10;
	
	}
return p;
}
