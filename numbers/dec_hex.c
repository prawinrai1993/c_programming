#include<stdio.h>


main()
{
int num,temp,i=1,j,rem;
char HEX[20];
printf("enter a number :");
scanf("%d",&num);
rem=num;

while(rem)
{
	temp=rem%16;
	if(temp<10)
		temp=temp+48;
	else
		temp=temp+55;

	HEX[i++]=temp;
	rem=rem/16;
}
HEX[i]='x';
HEX[i+1]=48;
printf("hex value for %d: ",num);

for(j=i+1;j>0;j--)
	printf("%c",HEX[j]);

printf("\n\n");

}
