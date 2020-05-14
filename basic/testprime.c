#include<stdio.h>


main()

{
int x=2,y[100],i=0,cnt=0,flag=0;
while(cnt!=100)
{
if(testprime(x))
{
//printf("%d ",x);
y[i++]=x;
cnt++;
}
x++;
}

for(i=0;i<100;i++)
if((y[i+1]-y[i])==2)
printf("%d  %d\n",y[i],y[i+1]);


}

int testprime(int x)
{
int i;
for(i=2;i<x;i++)
{
if(!(x%i))
return 0;

}

return 1;

}
