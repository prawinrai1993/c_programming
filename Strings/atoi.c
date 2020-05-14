#include<stdio.h>
#include<string.h>

main()
{
char str[20];
long long int v=0,n,i;

printf("enter an integer(max 19 digits):");
gets(str);

for(i=0;str[i];i++)
	{
	v*=10;
	n=str[i]-48;
	v=v+n;
	}

printf("\n\nvalue after atoi :%Ld\n",v);

}
