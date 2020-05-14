#include<stdio.h>

int test_perfect(int);

main()
{

int num;

printf("enter a number: ");

scanf("%d",&num);


if(test_perfect(num))
printf("perfect number!!!!!!\n ");
else
printf("not a perfect number\n");

}


int test_perfect(int num)
{
int i=0,sum=0;

for(i=1;i<num;i++)
{
if(num%i);
else
sum=sum+i;
}

if(sum==num)
return 1;
else
return 0;

}
