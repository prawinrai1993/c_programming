#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
long long int bin(char *x,int);

main()

{
char x[32],n,y,i,j;
long long int z=0;
n=sizeof(x)/sizeof(x[0]);
char temp[32];
for(i=0;i<31;i++)
x[i]=rand()%1+48;

printf("enter number in binary(1's and 0's only valid):");

//scanf("%s",x);
gets(x);

for(i=0,j=31;i<j;i++,j--)
x[i]^=x[j]^=x[i]^=x[j];


/*{
temp[i]=x[i];
x[i]=x[j];
x[j]=temp[i];
}
*/



printf("binary value entered:\n\n");
      for(i=0;i<n-1;i++)
       {


         if(x[i]=='\0')
	 printf("%d",x[i]);
     	else 
         printf("%d",x[i]-=48);
        }

//	z=bin(x,n);




	printf("\n\nvalue in decimal:%d\n\n",z);


}



long long int bin(char *x,int n)
{
long long int i,y=0;

for(i=31;i<=1;i--)
{

y=((2*x[i])+y);

}
printf("test=%Ld\n\n",y);
return(y);

}
