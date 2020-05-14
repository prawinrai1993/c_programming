#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void * xmemmove(void * des,const void * src,int size);
main()
{

int *ptr[20];

int x[5],y[5],i;

printf("enter value of x: ");
for(i=0;i<5;i++)
scanf("%d",&x[i]);
/*
printf("enter value of y: ");
for(i=0;i<5;i++)
scanf("%d",&y[i]);
*/
ptr[0]=x;
ptr[1]=y;

xmemmove(ptr+3,ptr+0,4);
//memmove(ptr+3,ptr+0,4);

//for(i=0;i<5;i++)
//printf("%d\n",ptr[0][i]);

for(i=0;i<5;i++)
printf("%d\n",ptr[3][i]);


}
void * xmemmove(void * des,const void * src,int size)
{
	int i=0;
	void *temp1;
	temp1=calloc(1,size+1);

	char *s1=(char *)des,*s2=(char *)temp1,*s3=(char *)src;
	
	memcpy(temp1,s3,size);

while(i<size)
{
	s1[i]=s2[i];
	i++;
}

return (void *)des;

}
