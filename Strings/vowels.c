#include<stdio.h>
void rand_var(char *a,int n);
void vowels(char *a,int n);


main()
{
char a[10];
int n,i;

n=sizeof(a)/sizeof(a[0]);
srand(time(0));
	for(i=0;i<n;i++)
	{

		a[i]=rand()%26+65;


	}

rand_var(a,n);

vowels(a,n);

}



void rand_var(char *a,int n)
{
int i;
printf("\n\nrandom characters taken for vowel test:\n\n");

	for(i=0;i<n;i++)
	{

		printf("index=%d rand=%c\n",i,a[i]);


	}

}


void vowels(char *a,int n)
{
int i;
printf("\n\nvowels found in random characters above:\n\n");

	for(i=0;i<n;i++)
	{

	   if((a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
	   {

		printf("index=%d vowel=%c\n",i,a[i]);

	   }
	}
printf("\n\n");
}

