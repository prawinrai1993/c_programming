#include<stdio.h>
#include<string.h>
main()
{
char s1[100],s2[100],temp[100],*ptr;
int i,j;
printf("input s1:");
gets(s1);

printf("\ninput s2:");
gets(s2);

for(i=0,j=strlen(s2)-1;i<strlen(s2);i++,j--)
{
temp[i]=s2[j];
temp[j]=s2[i];
}
temp[strlen(s2)]='\0';

//printf("\n\n%s\n\n",temp);
ptr=s1;
while(ptr=strstr(ptr,s2))
{
memmove(ptr,temp,strlen(temp));
ptr++;
}

printf("\n\n%s\n\n",s1);

}
