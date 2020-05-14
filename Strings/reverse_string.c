#include<stdio.h>
#include<string.h>


main()
{

int i,j,k=0,n,l=0,temp1;
char str[1000];
char temp[1000];
printf("enter a string: ");
scanf("%[^\n]s",str);

for(i=strlen(str);i>=0;i--)
{
	if((str[i]==' '))
	{
	for(j=i,n=l,temp1=0;temp1<k;j++,n++,temp1++)
	{
		temp[n]=str[j];
	}
	l=k+l;
	k=0;
	k++;
	}
	else
	k++;
	
}

printf("%s",temp);

}
