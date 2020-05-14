#include<stdio.h>
#include<string.h>
void * xstrchr(const char *str,char ch);

main()
{
int i;
char str[100],ch,*ptr;
printf("enter the string: ");
gets(str);
printf("enter char to find:");
scanf("%c",&ch);

if(ptr=xstrchr(str,ch))
i=ptr-str;

printf("location=%d\n\n",i);
}



void * xstrchr(const char *str,char ch)
{

int i;
char *ptr;

ptr=str;
for(i=0;str[i];i++)
{
	if(ch==str[i])
	return ptr;

	ptr++;

}
return NULL;


}
