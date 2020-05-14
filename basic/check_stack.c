#include<stdio.h>
void f(int a);

main()
{
f(3);
}

void f(int a)
{
printf("in f a=%d\n\n",a);

if(a)
f(a-1);
printf("in f a=%d\n\n",a);
return;

}
