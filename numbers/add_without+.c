#include<stdio.h>


main()
{
int num1,num2,num3=0,i,carry=0;

printf("enter two numbers: ");
scanf("%d%d",&num1,&num2);

for(i=0;i<32;i++)
{
if(((num1>>i)&1)&&((num2>>i)&1))
{
num3|=(~(1<<i)|(carry<<i));
carry=1;
}
else
{
if(carry==1)
{
num3|=~(1<<i);
carry=1;
}
else
{
num3|=(1<<i);
carry=0;
}


}


}

printf("sum=%d",num3);



}
