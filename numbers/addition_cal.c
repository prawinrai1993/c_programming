/******program for addition of n numbers*****/


#include<stdio.h>
main()
{
int i,j,sum;
int a[10];
printf("enter the number of elements\n\n");

scanf("%d",&i);

printf("enter elements=\n\n");
for(j=0;j<i;j++)
{
printf("enter element=\n\n");
scanf("%d",&a[j]);
}
sum=0;
for(j=0;j<i;j++)



{

sum=sum+a[j];

}
printf("total sum=%d\n\n",sum);

}


