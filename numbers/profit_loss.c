#include<stdio.h>

main()

{

float x,y,z;


printf("\n\nenter cost price:");

scanf("%f",&x);

printf("\n\nenter selling price:");

scanf("%f",&y);

if(x<=y)
{
z=y-x;
printf("\n\nprofit gained=%f\n",z);
}
else if(y<x)
{
z=x-y;
printf("\n\nloss encured=%f\n",z);

}
}
