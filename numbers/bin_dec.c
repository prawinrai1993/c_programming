#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<math.h>
long long int power(char *,long long int);

main()
{
	int i,j;
	char binary[32],temp;

	bzero(binary,32);

	printf("enter a binary stream of 32 bits(only 1's and 0's allowed):");
	gets(binary);

	for(i=0,j=strlen(binary)-1;i<j;i++,j--)
	{
		temp=binary[i];
		binary[i]=binary[j];
		binary[j]=temp;
	}

	printf("hexvalue=0x%x\n\n",power(binary,strlen(binary)));
}



long long int power(char *y,long long int i)
{
	int j,temp=0;

	for(j=0;j<i;j++)
	{
		temp=(((int)pow(2,j))*((*y)-48))+temp;
		y++;
	}
	return(temp);

}
