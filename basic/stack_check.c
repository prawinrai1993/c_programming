#include<stdio.h>
int a=0;
main()
{

printf("main a=%d\n",a);
a++;
if(a<4)
main();

printf("returning from main a=%d\n",a);

}
