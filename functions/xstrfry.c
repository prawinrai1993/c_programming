#include<stdio.h>
#include<string.h>

char * xstrfry(char *src);

main()
{
	char *ptr,p[10];
	
	printf("enter string 1:");
	scanf("%s",p);

	ptr=xstrfry(p);
	
	printf("%s\n",ptr);
	printf("%s\n",p);
}


char * xstrfry(char *src)
{
int i,j,x=0,len;
char *ptr;
len=strlen(src)-1;
strcpy(ptr,src);

for(i=len;i>=0;i--)
for(j=x;j<=len;j++)
{
	src[j]=ptr[i];
	x++;
	break;
}


src[j+1]='\0';
return src;

}
