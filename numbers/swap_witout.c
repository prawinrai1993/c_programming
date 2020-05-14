#include<stdio.h>
///***program to swap variables without temp variable*****////
main()
{

long long int c,d;

printf("\n\nenter value of c=");
scanf("%Ld",&c);

printf("\n\nenter value of d=");
scanf("%Ld",&d);

printf("\n\n value of c and d=\n%d \n%d\n\n",c,d);

c=c+d;
d=c-d;
c=c-d;

printf("\n\n swaped value of c and d=\n%d \n%d\n\n",c,d);


}
