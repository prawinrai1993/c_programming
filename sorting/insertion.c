#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	int *arr,n,i,j,temp,index;

	printf("enter the number of elements: ");
	scanf("%d",&n);

	arr=calloc(n,sizeof(int));

	for(i=0;i<n;i++)
		arr[i]=rand()%10+50;

	for(i=0;i<n;i++)
		printf("arr[%d]=%d\n",i,arr[i]);



	for(i=1;i<n;i++)
	{
		index=arr[i];

		for(j=i;j>0&&arr[j-1]>index;j--)
		{
			arr[j]=arr[j-1];
			arr[j-1]=index;
		
		}



	}
printf("after sort........\n\n");

	for(i=0;i<n;i++)
		printf("arr[%d]=%d\n",i,arr[i]);


printf("\n\n");

}
