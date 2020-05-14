#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void sort(int pivot,int left,int right);

int *arr=NULL;

int main()
{
	int n,i,j,temp,pivot;

	printf("enter the number of elements: ");
	scanf("%d",&n);

	arr=calloc(n,sizeof(int));

	for(i=0;i<n;i++)
		arr[i]=rand()%10+50;

	for(i=0;i<n;i++)
		printf("arr[%d]=%d\n",i,arr[i]);

	sort(arr[0],1,n-1);

	for(i=0;i<n;i++)
		printf("arr[%d]=%d->>",i,arr[i]);


printf("\n\n");

}


void sort(int pivot,int i,int j)
{

int left=i,right=j,temp;

	while(i<j)
	{
		while(arr[i]<=pivot)
		i++;
		while(arr[j]>pivot)
		j--;
		if(i<j)
		{
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		}


	}

	temp=arr[j];
	arr[j]=arr[left];
	arr[left]=temp;

	if(left<right)
	{
	sort(arr[left],left,j-1);
	sort(arr[j],j+1,right);
	}


}
