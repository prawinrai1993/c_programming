#include<string.h>
#include<stdio.h>

main()
{

	int i,j,k;

	
	char temp[]="%20",str[1000];

	scanf("%[^\n]s",str);
	

	for(i=0;i<strlen(str);i++)	
	{
		if(str[i]==' ')
		{
			for(j=strlen(str);j>=0;j--)
			{
				str[i+j+3]=str[i+j+1];

			}
			for(k=i,l=0;l<3;k++,l++)
			{
				str[k]=temp[l];
			
			}
			
		}


	}

	printf("%s",str);


}
