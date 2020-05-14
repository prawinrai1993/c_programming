#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

	char str[10000];
	int len,i,j,k,T,cnt=0;
	scanf("%d",&T);
	for(k=0;k<T;k++)
	{
		getchar(); 
		scanf("%[^\n]s",str);
		len=strlen(str);
		cnt=0;

		for(i=0,j=len-1;i<j;i++,j--)
		{
			while((str[i]<str[j])&&(str[j]!='a'))
			{
				str[j]--;
				cnt++;
			}
			while((str[i]>str[j])&&(str[i]!='a'))
			{

				str[i]--;
				cnt++;    
			}

		}
		printf("%d\n",cnt);
	}

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
	return 0;
} 
