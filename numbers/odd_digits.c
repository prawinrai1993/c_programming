#include<stdio.h>

main()
{
int x,y,z=0,a;
printf("\n\nenter number:");
scanf("%d",&x);
while(x!=0)
{
y=x%10;

x=x/10;
a=y%2;


if(a!=0)
{
z++;
}
}
printf("\n\nnumber of odd digits:%d\n\n",z);

}






