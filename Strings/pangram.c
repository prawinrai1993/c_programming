#include<stdio.h>
#include<string.h>

main()
{
char str[1000];
int i,j,k=0;
	printf("anter a string: ");
	scanf("%[^\n]s",str);

	for(i=0;i<26;i++)
	{
		if(strchr(str,i+65));
		else
		{
			if(strchr(str,i+65+32));
			else
			{
				printf("not a pangram!!!!!\n\n");
				return;

			}

		}
	}
		printf("is a pangram!!!!!!!!\n\n");

}
