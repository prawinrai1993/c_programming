#include<stdio.h>
/****************program to evaluate expression **********/
main()
{

float a,b,c,x,y,z=0;
printf("\n\nenter  value of x,y=");
scanf("%f%f",&x,&y);

z=(((3*(x+y))/(9*x+2*y))-((x-y)/(2*x+3*y)));


a=((2*x-y)/((3*x+y)*(x-2)*(y+3)));

b=(((3*x+4*y)*(2*x-3))/(((x-y)/(x+y))+(2*x+3)));

printf("\n\nvalue of expression_1=%f",z);

printf("\n\nvalue of expression_2=%f",a);


printf("\n\nvalue of expression_3=%f\n\n",b);
//c=6.0/11.0;

//printf("value of c=%f",c);
}


