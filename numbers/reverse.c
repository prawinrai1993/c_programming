#include<stdio.h>

main()
{

int x,y,z,i=0;

printf("\nenter number to be reversed:");
scanf("%d",&x);
z=x;
printf("\nnumber entered:%d\n",x);


while(x!=0)
{

y=x%10;
i=i*10+y;
x=x/10;

}

printf("\nvalue of reversed number:%d\n\n",i);

if(i==z)
{
printf("input and reversed number equal\n\n");
}
else
{
printf("input and reversed not equal\n\n");
}




}




