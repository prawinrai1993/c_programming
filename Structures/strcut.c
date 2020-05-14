#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct tag
{
int a;
char b;
double c;
long long int d;
};

main()
{
struct tag *p;
p=(struct tag*)0;
p++;
printf("%d\n",(char*)p);
}
