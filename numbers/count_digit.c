#include<stdio.h>

main()
{

int x,data;
printf("enter data:");
scanf("%d",&data);

printf("number of digits=%d\n\n",count_digit(data));

return 0;

}

count_digit(int data)
{

int count=0;
while(data!=0)
{
data=data/10;
count++;
}
return count;
}
