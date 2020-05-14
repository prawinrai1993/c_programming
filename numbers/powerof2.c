#include<stdio.h>

main()
{
int data,i,flag=0;

printf("enter data: ");
scanf("%d",&data);


for(i=0;i<32;i++)
{
if((data>>i)&1)
flag++;
}
if(flag==1)
printf("power of 2......\n");
else
printf("not.....\n\n");


}
