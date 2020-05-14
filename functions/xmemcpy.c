#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void * xmemcpy(void * des,const void * src,int size);
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

//xmemcpy(str+1,str+4,strlen(str)+1);
memcpy(str+1,str+4,strlen(str)+1);
printf("res=%s",str);

}

void * xmemcpy(void * des,const void * src,int size)
{
	int i=0;

	char *s1=(char *)des,*s2=(char *)src;
	

while(i<size)
{
	s1[i]=s2[i];
	i++;
}

return (void *)des;

}
