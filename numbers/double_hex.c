#include<stdio.h>
#include<string.h>

union st{

long long int a;
double b;
}v;

char *dob_hex(char *str)
{
int i,j,cnt=4,sum=0;
static char hex[40];
bzero(hex,40);

for(i=0;i<64;i++)
{
	for(j=i;cnt;j++)
	{
	if((cnt==4)&&(str[j]=='1'))
		sum=sum+8;
	else if((cnt==4)&&(str[j]=='0'))
		sum=sum+0;
	else if((cnt==3)&&(str[j]=='1'))
		sum=sum+4;	
	else if((cnt==3)&&(str[j]=='0'))
		sum=sum+0;
	else if((cnt==2)&&(str[j]=='1'))
		sum=sum+2;
	else if((cnt==2)&&(str[j]=='0'))
		sum=sum+0;
	else if((cnt==1)&&(str[j]=='1'))
		sum=sum+1;
	else if((cnt==1)&&(str[j]=='0'))
		sum=sum+0;
	
	
	cnt--;
	i++;
	}

switch(sum)
{
case 0:strcat(hex,"0");
	break;
case 1:strcat(hex,"1");
	break;
case 2:strcat(hex,"2");
	break;
case 3:strcat(hex,"3");
	break;
case 4:strcat(hex,"4");
	break;
case 5:strcat(hex,"5");
	break;
case 6:strcat(hex,"6");
	break;
case 7:strcat(hex,"7");
	break;
case 8:strcat(hex,"8");
	break;
case 9:strcat(hex,"9");
	break;
case 10:strcat(hex,"A");
	break;
case 11:strcat(hex,"B");
	break;
case 12:strcat(hex,"C");
	break;
case 13:strcat(hex,"D");
	break;
case 14:strcat(hex,"E");
	break;
case 15:strcat(hex,"F");
	break;
}

sum=0;
cnt=4;

}

return hex;
}


main()
{
	int i,j=0;
	char str[100],*ptr;

printf("enter a double value: ");
scanf("%lf",&v.b);

for(i=63;i>=0;i--)
{
//printf("%d",(v.a>>i)&1);
if(((v.a>>i)&1))
str[j]=1+48;
else
str[j]=0+48;
j++;
}
//printf("....\n");
str[j]='\0';

ptr=dob_hex(str);
printf("binary=%s.......\n",str);
printf("hex=%s.......\n",ptr);

printf("\n\n");

}
