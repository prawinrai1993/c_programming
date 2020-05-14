#include<stdio.h>

main()
{
int i,j,m,temp,t,n,a[200],x;
printf("\nnumber of factorials: ");
scanf("%d",&t);
while(t--)
{
	printf("\nenter number of factorial: ");
	scanf("%d",&n);
	a[0]=1;		//initialize arry with only one digit
	m=1;		//initialize count
	temp=0;		//initialize carry


for(i=1;i<=n;i++)
{
	for(j=0;j<m;j++)
	{
		x=a[j]*i+temp;		//x contains digit by digit product
		a[j]=x%10;
		temp=x/10;
	}
	while(temp>0)		//will store carry value
	{
		a[m]=temp%10;
		temp=temp/10;
		m++;
	}
}
	printf("\nfactorial value of %d: ",n);
	for(i=m-1;i>=0;i--)
	{
	printf("%d",a[i]);
	}

	printf("\n\n");
}

return 0;
}
