#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void * xmemmove(void * des,const void * src,int size);
main()
{
	int i;
	char ch='A';
	char str[100]; 
	char ptr[100];
	char *test;
	printf("enter str: ");
	gets(str);
	printf("enter ptr: ");
	gets(ptr);

//memcpy(str+4,str+1,strlen(str)+1);
xmemmove(str+4,str+1,strlen(str)+1);
//memmove(str+4,str+1,strlen(str)+1);
printf("res=%s",str);

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
