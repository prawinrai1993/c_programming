#include<stdio.h>
int primeNumber(int i);

main()
{
int  min,max,i;
printf("enter min=");
scanf("%d",&min);
printf("enter max=");
scanf("%d",&max);
	for(i=min;i<=max;i++)
	{
		if(primeNumber(i))
		printf("%5d",i);
	}



}
int primeNumber(int i)


{
int j,cnt=0;

	for(j=1;j<=i;j++)
	{	
		if(!(i%j))
		cnt++;
	}
if(cnt==2)
	return 1;
else
	return 0;

cnt=0;
}









