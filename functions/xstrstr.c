#include<stdio.h>
#include<string.h>

char *xstrstr(const char*,const char*);

main()
{

char *ptr,*ptr1;
char str[30]="praveen hello world";
ptr=xstrstr(str,"hello");

if(ptr==NULL)
printf("not found.....\n");
else
printf("found.....\n");



}


char *xstrstr(const char *q,const char *p)
{
int j,k,l1,cnt=1;
l1=strlen(p);
static char *ptr;


for(j=0;q[j];j++)
{
	if(p[0]==q[j])
		for(k=1;p[k];k++)
		{
			if(p[k]==q[j+k])
			cnt++;
			else
			break;

			if(cnt==l1)
			return ptr=q+j;

		}
cnt=1;
}
return NULL;

}



