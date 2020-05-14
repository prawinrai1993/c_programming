#include<stdio.h>

int reverse(int);

main()
{
int i;
printf("enter a digit: ");
scanf("%d",&i);

i=reverse(i);
printf("%d.........\n",i);
}

int reverse(int x)
{
static sum,y;


if(x==0)
return 1;
else
{
y=x%10;
sum=sum+(y);
if(x>10)
sum=sum*10;
reverse(x/10);
}
return sum;


}
