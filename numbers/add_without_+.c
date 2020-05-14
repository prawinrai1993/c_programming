#include<stdio.h>

int add(int x,int y);

main()
{
	int x,y,carry;

	printf("enter value of x:");
	scanf("%d",&x);
	printf("enter value of y:");
	scanf("%d",&y);

	printf("sum=%d\n\n\n",add(x,y));

}


int add(int x,int y)
{
	int carry;

	while(y)
	{
		carry=x&y;
		x=x^y;
		y=carry<<1;
	}
	return x;
}


