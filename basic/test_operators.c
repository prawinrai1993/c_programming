#include<stdio.h>
main()
{
int i=2,j=3,k,l;
float a,b;
k=i/j*j;    //0
l=j/i*i;    //2
a=i/j*j;    //0
b=j/i*l;    //0
printf("%d %d %d %d\n\n",k,l,a,b);

}
