#include<stdio.h>

main()
{
int x=0;
int i,j;
float y=0;
i=5;
int marks[i];
printf("enter the marks of candidate\n\n");

for(j=0;j<i;j++)
{
scanf("%d",&marks[j]);

}

for(j=0;j<i;j++)
{
x=x+marks[j];
}
printf("\n\naggregate marks=%d\n\n",x);
y=((x*100)/250);

printf("\n\npercentage=%f\n\n",y);

}
