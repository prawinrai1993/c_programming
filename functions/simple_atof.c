#include<stdio.h>
#include<math.h>
main()
{
int i=0,x=0,result=0,y=0,cnt=0;
float res=0;
char str[100];


printf("enter a float: ");
gets(str);


while(str[i])
{
if(str[i]=='.')
break;

if(!(str[i]>='0'&&str[i]<='9'))
{
printf("%f",0);
return;
}

y=str[i]-48;
result=y+result;
result*=10;
i++;
}
i++;

while(str[i])
{

if(!(str[i]>='0'&&str[i]<='9'))
{
printf("%f",(float)result/pow(10,cnt+1));
return;
}

y=str[i]-48;
result=y+result;
result*=10;
i++;
cnt++;
}

res=(float)result/pow(10,cnt+1);
printf("%f",res);

+}
