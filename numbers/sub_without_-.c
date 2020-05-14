#include<stdio.h>

int sub(int x,int y);

main()
{
	int x,y,carry;

	printf("enter value of x:");
	scanf("%d",&x);
	printf("enter value of y:");
	scanf("%d",&y);

	printf("res=%d\n\n\n",sub(x,y));
}


int sub(int x,int y)
{
	int borrow;

	while(y)
	{
		borrow=x&y;
		x=(~x)^y;
		y=borrow<<1;
	}
	return x;
}


