#include<stdio.h>

/******program to find average of n numbers*********/

main()
{
int x=0,z,i,j;
float y;
printf("\n\nenter number of elements=");
scanf("%d",&i);
int arr[i];
printf("\n\nenter elements=");

for(j=0;j<i;j++)
{
scanf("%d",&arr[j]);
}
/*for(j=0;j<i;j++)
{
printf("elements=%d\n\n",arr[j]);

}
*/
for(j=0;j<i;j++)
{
x=x+arr[j];
}
y=x/i;
printf("\n\n average=%f\n\n",y);



}
