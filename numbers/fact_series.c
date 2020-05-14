#include<stdio.h>
int fact(int x);

main()
{
	float sum=0,x;
	int i;
	printf("enter max series:");
	scanf("%d",&i);
	for(x=1;x<=i;x++)
	{

		sum=(x/fact(x))+sum;

	}
	printf("\n\nsum=%f\n\n",sum);
}


int fact(int x)
{
	int fact=1,j;
	while(x!=0)
	{
		fact=fact*x;
		x--;
	}
	//printf("%d\n",fact);
	return(fact);
}
