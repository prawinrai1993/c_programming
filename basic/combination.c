#include<stdio.h>

main()
{

int x,y,z;

	for(x=1;x<4;x++)
{
	for(y=1;y<4;y++)
{
	for(z=1;z<4;z++)
{
	if(x!=y && y!=z && z!=x)

	printf("x:%dy:%dz:%d\n",x,y,z);

}

}

}

}


