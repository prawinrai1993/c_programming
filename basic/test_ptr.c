#include<stdio.h>




main()



{
int *z;

char a;
printf("%u %c\n",&a,a);

z=(int *)&a;
*z='D';
printf("%u %c\n",&a,a);





}




