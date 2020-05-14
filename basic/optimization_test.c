#include<stdio.h>

main()
{
int x=10,y=5,z=3,d=0;



printf("%d %d %d %d\n\n",x=y,y<<1,z>>3,d=x);

x=10,y=5,z=3,d=0;


printf("%d %d\n\n",y=x++ - z-- + ++x,z);

x=10,y=5,z=3,d=0;


printf("%d\n",x=y-- + ++z - ++y + z++);

x=10,y=5,z=3,d=0;

printf("%d %d %d %d\n",y--,++z,++y,z++);
printf("%d",y);


}
