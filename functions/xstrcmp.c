#include<stdio.h>

int xstrcmp(const char *s1,const char *s2)
{
int i;

for(i=0;s1[i];i++)
{
	if(s1[i]>s2[i])
	return 1;
	else if(s1[i]<s2[i])
	return -1;
}

	if(s1[i]==s2[i])
	return 0;
	else if(s1[i]>s2[i])
	return 1;
	else if(s1[i]<s2[i])
	return -1;


}






