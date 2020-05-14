#include<stdio.h>


main()
{
int num,temp;
int oct[20],i=1,j;
printf("enter a number :");
scanf("%d",&num);
temp=num;

while(temp)
{
	oct[i++]=temp%8;
	temp=temp/8;
}
oct[i]=0;
printf("octal value for %d: ",num);

for(j=i;j>0;j--)
	printf("%d",oct[j]);

printf("\n\n");

}
