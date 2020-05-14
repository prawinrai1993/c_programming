#include<stdio.h>



main()

{


int x,y,z,min,max;

printf("\nenter min=");
scanf("%d",&min);
printf("\nenter max=");
scanf("%d",&max);

for(x=min;x<=max;x++)
{

	for(y=2;y<=x;y++)
	{
		if(!(x%y))
		break;

	}
if(x==y)
printf("%5d",x);


}

}
