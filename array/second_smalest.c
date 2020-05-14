#include<stdio.h>


main()
{
int arr[20],j,i=0,min=100,second_min=100;
printf("numbers: ");
srand(time(0));
for(i=0;i<20;i++)
{
arr[i]=rand()%100;

}

for(i=0;i<20;i++)
{
printf("%d  ",arr[i]);
}

for(i=0;i<20;i++)
{
if(arr[i]<min)
min=arr[i];
if((arr[i]<second_min)&&(arr[i]>min))
second_min=arr[i];
}

printf("\n\nsecond_min=%d\n\n",second_min);
}



