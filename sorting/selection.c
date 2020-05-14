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
		arr[i]=rand()%1000+100;

printf("before sort...........\n\n");
	for(i=0;i<n;i++)
		printf("arr[%d]=%d\n",i,arr[i]);



	for(i=0;i<n;i++)
	{

		for(j=i+1;j<n;j++)
		{

			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}

		}



	}


printf("after sort...........\n\n");
	for(i=0;i<n;i++)
		printf("arr[%d]=%d\n",i,arr[i]);


printf("\n\n");

}
