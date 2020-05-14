#include<stdio.h>
#include<stdlib.h>

main()
{

int *arr1=NULL,*arr2=NULL,*arr3=NULL,i,j,sarr1,sarr2,temp;

printf("enter sizeof 1st arr: ");
scanf("%d",&sarr1);

printf("enter sizeof 2nd arr: ");
scanf("%d",&sarr2);


arr1=calloc(1,sizeof(int)*sarr1);

arr2=calloc(1,sizeof(int)*sarr2);

arr3=calloc(1,sizeof(int)*(sarr2+sarr1));

for(i=0;i<sarr1;i++)
arr1[i]=rand()%50+1;

for(i=0;i<sarr2;i++)
arr2[i]=rand()%50+1;

for(i=0;i<sarr1;i++)
for(j=i+1;j<sarr1;j++)
{
	if(arr1[i]>arr1[j])
	{
		temp=arr1[i];
		arr1[i]=arr1[j];
		arr1[j]=temp;
	}	
}


for(i=0;i<sarr2;i++)
for(j=i+1;j<sarr2;j++)
{
	if(arr2[i]>arr2[j])
	{
		temp=arr2[i];
		arr2[i]=arr2[j];
		arr2[j]=temp;
	}	
}

printf("sorted array 1: ");
for(i=0;i<sarr1;i++)
printf("%d>>",arr1[i]);

printf("\n\n");

printf("sorted array 2: ");
for(i=0;i<sarr2;i++)
printf("%d>>",arr2[i]);

printf("\n\n");


j=0;
int x=0;
i=0;

for(x=0;x<sarr1+sarr2;x++)
{


if(i==sarr1)
break;
if(j==sarr2)
break;


if(arr1[i]<arr2[j])
{
	arr3[x]=arr1[i];
	i++;
}
else if(arr1[i]>arr2[j])
{
	arr3[x]=arr2[j];
	j++;
}
else if(arr1[i]==arr2[j])
{
	arr3[x]=arr1[i];
	i++;
}

}


if(i==sarr1)
{
for(i=j;i<sarr2;i++)
{
arr3[x]=arr2[i];
x++;
}
}
else if(j==sarr2)
{
for(j=i;j<sarr1;j++)
{
arr3[x]=arr1[j];
x++;
}
}


printf("finally array : ");
for(i=0;i<sarr2+sarr1;i++)
printf("%d>>",arr3[i]);

printf("\n\n");

}
