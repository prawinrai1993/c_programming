#include<stdio.h>


int i;
void inc()
{

i++;
}


int main()
{


for(i=0;i<10;inc())
{

}
printf("%d",i);


}
