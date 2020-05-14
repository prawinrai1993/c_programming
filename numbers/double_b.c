#include<stdio.h>

main()
{
	double y;
	long long int *p,x,i;

printf("enter a val double: ");
scanf("%lf",&y);

p=&y;
x=*p;

for(i=63;i>=0;i--)
printf("%d",(x>>i)&1);

}
