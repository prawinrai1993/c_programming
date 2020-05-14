#include<stdio.h>
/********program to find addition of all numbers*********/
main()

{

int x,y,z=0;

printf("\nenter number:");

scanf("%d",&x);

while(x!=0)
{
y=x%10;
x=x/10;

z=z+y;

}

printf("\n\nvalue of addition of all numbers:%d\n\n",z);

}
