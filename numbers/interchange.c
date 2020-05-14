#include<stdio.h>

main()
{
int temp,c,d;

printf("\n\n enter the value of c=");
scanf("%d",&c);
printf("\n\n enter the value of d=");

scanf("%d",&d);
printf("\n\nafter intercahange of values");

temp=c;
c=d;
d=temp;

printf("\n\n value of c=%d\n\nvalue of d=%d\n\n",c,d);


}


