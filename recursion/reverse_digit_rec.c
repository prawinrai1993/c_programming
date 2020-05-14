#include<stdio.h>
int reverse(int);


main()
{
int x,y;

printf("enter number:");
scanf("%d",&x);
y=reverse(x);
printf("reverse=%d\n",y);
}



int reverse(int x)
{
int v,s=x;
if(x==0)
return 0;
v=x%10;
while(s>10)
{
 s=s/10;
 v=v*10;
}

  return(v+reverse(x/10));

}










/*
int reverse(int x)
{
int res;
if(x==0)
return 0;
else
{
res=x%10;
return(res*10+reverse(x/10));
}

*/


/*
int reverse(int x)
{
static int sum=0;
if(x!=0)
{
sum=sum*10+x%10;
reverse(x/10);
}
else
return sum;
//return(x%10+(10*reverse(x/10)));

}

*/
