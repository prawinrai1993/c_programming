#include<stdio.h>


main()

{
int x;
printf("enter an integer:");
scanf("%d",&x);

printf("\n\nnum_digits=%d\n\n",num_digits(x));




}

int num_digits(int x)
{

if(x==0)
return 0;

else
return(1+num_digits(x/10));

}
