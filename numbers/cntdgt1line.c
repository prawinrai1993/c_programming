#include<stdio.h>

main()
{
int i,data,sum=0;

printf("enter data: ");
scanf("%d",&data);

//data=(data%10)+((data/10)%10)+((data/100)%10)+((data/1000)%10)+((data/10000)%10);
while(data?((sum=sum+data%10),(data=data/10)) : 0);

printf("%d.............\n\n",sum);



}
