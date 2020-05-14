#include<stdio.h>
//#include<stdlib.h>
main()
{
char a[10];
int i,n;

n=sizeof(a)/sizeof(a[0]);

srand(getpid());


	for(i=0;i<n;i++)
	{
		if(rand()%2==0)
		a[i]=rand()%26+65;
		else
		a[i]=rand()%26+97;
	}


printf("\n\nrandom characters for test:\n\n");


	for(i=0;i<n;i++)
	{
		printf("index=%d  character=%c\n",i,a[i]);
	}


printf("\n\nVowels from above random characters supplied:\n\n");
	
	for(i=0;i<n;i++)
	{

	if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a		[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
	printf("index=%d  vowel=%c\n",i,a[i]);

	}
printf("\n\n");

}


