#include<stdio.h>

main()

{
	int max,x=0,y=1,i;

	printf("\n\nenter max range=");
	scanf("%d",&max);
	printf("\n\nfibonacci_series\n\n");
	i=0;
	printf("%6d",y);
	while(i<max/2)
	{	

		x=x+y;
		printf("%6d",x);
		y=x+y;
		printf("%6d",y);

		i++;	                
	}

	printf("\n\n");




}
