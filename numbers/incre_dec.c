#include<stdio.h>

main()
{

int x=-5,y=1,z=1;


printf("%d %d %d\n\n",--x,++y,z--+1);

z=x++ + y++;

printf("%d %d %d\n\n",x,y,z);

z=++x + ++y;


printf("%d %d %d\n\n",x,y,z);

z=--x + --y;



printf("%d %d %d\n\n",x,y,z);


z=x-- + y--;



printf("%d %d %d\n\n",x,y,z);


}
