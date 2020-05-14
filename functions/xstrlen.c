#include<stdio.h>

int xstrlen(const char *);

main()
{
int l;
char p[10];
scanf("%s",&p);
l=xstrlen(p);
printf("%d\n",l);

}

int xstrlen(const char *p)
{
int len;
for(len=0;p[len];len++);

return len;

}
