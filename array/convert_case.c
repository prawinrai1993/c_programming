#include<stdio.h>

main()
{
char a[100];
int n;
char i;
n=sizeof(a)/sizeof(a[0]);
/*
	for(i=0;i!=10;i++)
	scanf("%c",&a[i]);
*/
scanf("%[^\n]s",a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		a[i]=a[i]+32;
		else if(a[i]>='a'&&a[i]<='z')
		a[i]=a[i]-32;

	}

printf("%s\n",a);

	for(i=0;i!='\0';i++)
	{
		printf("%c",a[i]);

	}
printf("\n\n");

}
