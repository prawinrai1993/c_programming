#include<stdio.h>
#include<string.h>

main()
{
char s1[100],s2[100],temp[200];
int i;


printf("\ninput string s1:");
scanf("%[^\n]s",s1);
//gets(s1);


getchar();
printf("\ninput string s2:");
scanf("%[^\n]s",s2);
//gets(s2);


//strcpy(temp,s1);
//printf("\ntemp after s1 cpy op:%s\n\n",temp);

//strcpy(temp+strlen(s1),s2);
//printf("\ntemp after s2 cpy op:%s\n\n",temp);

printf("enter position to insert s2 in string s1:");
scanf("%d",&i);

memmove(s1+i+strlen(s2),s1+i,strlen(s1+i)+1);
memmove(s1+i,s2,strlen(s2));

printf("\n\nstring after insertion:%s\n\n",s1);

}
