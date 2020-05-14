#include<stdio.h>



main()


{



int x,y,z,sum=0,mul=1;

while(1)
{
printf("\nenter number to be checked for armstrong=");
scanf("%d",&x);

while(x!=0)
{
	y=x%10;
	sum=sum+y;
	mul=mul*y;
	x=x/10;
}


if(mul==sum)
printf("\n\narmstrong number\n\n");
else
printf("\n\nnot a armstrong number\n\n");
mul=1;
sum=0;
getchar();

}
}


