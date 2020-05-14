#include<stdio.h>


main()

{
char a[100];
int i,n;
int upper=0,lower=0,numeric=0,symbols=0;

n=sizeof(a)/sizeof(a[0]);

srand(getpid());
	for(i=0;i<n;i++)
	{

		a[i]=rand()%128;

	}



printf("\n\nrandom ascii values:\n\n");
	for(i=0;i<n;i++)
	{
		printf("index=%d ascii characters=%c\n",i,a[i]);

	}



printf("\n\n**************After Seperation:*****************\n\n");
	for(i=0;i<n;i++)
	{
		if(a[i]>='A'&&a[i]<='Z'){
		printf("index=%d  Uppercase_char=%c\n",i,a[i]);
		upper++;
		}
		else if(a[i]>='a'&&a[i]<='z'){
		printf("index=%d  Lowercase_char=%c\n",i,a[i]);
		lower++;
		}
		else if(a[i]>='0'&&a[i]<='9'){
		printf("index=%d  Numeric char=%c\n",i,a[i]);
		numeric++;
		}
		else{
		printf("index=%d  Special=%c\n",i,a[i]);
		symbols++;
		}
	}


printf("\n\nUppercase=%d  Lowercase=%d  Numeric=%d  Special=%d\n\n",upper,lower,numeric,symbols);



}
