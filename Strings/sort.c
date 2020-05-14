#include<stdio.h>
#include<string.h>



main()
{
char s1[100],temp[100];
int i,j,n;

printf("enter string:");
gets(s1);


n=strlen(s1);
for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<(n-1);j++)
		{
			if(s1[i]>s1[j])
{
			temp[i]=s1[i];
			s1[i]=s1[j];
			s1[j]=temp[i];

}			

		}

	}	

printf("\n\ns1:%s\n\n",s1);

}
