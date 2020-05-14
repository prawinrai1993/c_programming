#include<stdio.h>


char * xstrcat(char *des,char *src);

main()
{
	char *ptr,p[10],s[5];
	
	printf("enter string 1:");
	scanf("%s",p);
	printf("enter string 2:");
	scanf("%s",s);

	ptr=xstrcat(p,s);
	
	printf("%s",ptr);
	printf("%s",p);
}


char * xstrcat(char *des,char *src)
{
int i,j;

for(i=0;des[i];i++);
for(j=0;src[j];j++)
des[i+j]=src[j];

des[i+j]='\0';

return des;

}
