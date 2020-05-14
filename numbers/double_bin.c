#include<stdio.h>
#include<string.h>

union st{

long long int a;
double b;
}v;


main()
{
	int i;

printf("enter a double value: ");
scanf("%lf",&v.b);

for(i=63;i>=0;i--)
printf("%d",((v.a>>i)&1));

printf("\n\n");

}
