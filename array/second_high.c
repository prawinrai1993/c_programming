#include<stdio.h>


main()
{
int arr[20],j,i=0,high=0,second_high=0;
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
if(arr[i]>high)
high=arr[i];
}

for(i=19;i>0;i--)
{
if((arr[i]>second_high)&&(arr[i]<high))
second_high=arr[i];
}



printf("\n\nsecond_highest=%d\n\n",second_high);
}



