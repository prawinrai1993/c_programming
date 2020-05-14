#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	int *arr,n,i,j,temp;

	printf("enter the number of elements: ");
	scanf("%d",&n);

	arr=calloc(n,sizeof(int));

	for(i=0;i<n;i++)
		arr[i]=rand()%10+50;

	for(i=0;i<n;i++)
		printf("arr[%d]=%d\n",i,arr[i]);



	for(i=0;i<n-1;i++)
	{

		for(j=0;j<n-1-i;j++)
		{

			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

		}



	}


	for(i=0;i<n;i++)
		printf("arr[%d]=%d->>",i,arr[i]);


printf("\n\n");

}
