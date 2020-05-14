#include<stdio.h>
#include<stdlib.h>
main()
{
int x,i;
printf("enter number of elements:");
scanf("%d",&x);
int arr[x];

for(i=0;i<x;i++)
scanf("%d",&arr[i]);


for(i=0;i<x;i++)
printf("%d",arr[i]);

}


