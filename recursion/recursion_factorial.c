#include<stdio.h>
int fact(int x);
main()
{
int x;
printf("enter integer for factorial:");
scanf("%d",&x);

printf("\n\nfactorial=%d\n\n",fact(x));


}

int fact(int x)
{

if(x==1)
return 1;
else
return(x*fact(x-1));


}
