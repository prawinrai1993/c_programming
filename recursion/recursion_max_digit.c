#include<stdio.h>

main()

{
int x;

printf("enter an integer:");

scanf("%d",&x);
printf("\n\nhighest digit=%d\n\n",max_digit(x));


}


int max_digit(int x)
{
if(x==0)
return 0;
if(x%10>max_digit(x/10))
return(x%10);
return(max_digit(x/10));


}
