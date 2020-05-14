#include<stdio.h>
#include<stdlib.h>


int partition(int [],int,int);
void quick_sort(int [],int,int);
int swap(int [],int,int);



main()
{

long long int i;
int arr[1000000];
srand(time(0));

printf("\nenter elements:\n\n");
for(i=0;i<100000;i++)
arr[i]=rand()%50;
printf("\nentered elements:\n\n");
for(i=0;i<100000;i++)
printf("%d \t",arr[i]);
quick_sort(arr,0,99999);
printf("\nelements after sort:\n\n");
for(i=0;i<100000;i++)
printf("%d \t",arr[i]);

printf("\n\n");

}


void quick_sort(int arr[],int l,int h)
{
int pivot;

	if(h>l)
	{
	pivot=partition(arr,l,h);
	quick_sort(arr,l,pivot-1);
	quick_sort(arr,pivot+1,h);
	}

}


int partition(int arr[],int l,int h)
{
int pivot_val=arr[l],temp,left,right;

left=l;
right=h;


	while(l<h)
	{
		while(arr[l]<=pivot_val)
		l++;
		while(arr[h]>pivot_val)
		h--;	
		if(l<h)
		{
			temp=arr[l];
			arr[l]=arr[h];
			arr[h]=temp;

		}

	}

	arr[left]=arr[h];
	arr[h]=pivot_val;

	return h;

}

