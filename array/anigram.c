#include<stdio.h>
#include<string.h>

void sort_char(char *temp);
void case_change(char *temp);
void remove_alpha(char *temp);

main()
{
char s1[100],s2[100],temp1[100],temp2[100];


printf("enter string S1:");
gets(s1);

printf("enter string s2:");
gets(s2);


strcpy(temp1,s1);
strcpy(temp2,s2);

remove_alpha(temp1);
remove_alpha(temp2);
//printf("s1:%s\n\ns2:%s\n\n",temp1,temp2);
case_change(temp1);
case_change(temp2);

//printf("s1:%s\n\ns2:%s\n\n",temp1,temp2);
sort_char(temp1);
sort_char(temp2);

//printf("s1:%s\n\ns2:%s\n\n",temp1,temp2);

if(strcmp(temp1,temp2)==0)
printf("\n\n\t\t\tEntered strings are anigram of each other\t\t\t\n\n");
else
printf("\n\n\t\t\tEntered strings are NOT anigram of each other\t\t\t\n\n");

}





void remove_alpha(char * temp)
{
int i;
for(i=0;temp[i];i++)
{
	if(!(((temp[i]>='A') && (temp[i]<='Z')) || ((temp[i]>='a') && (temp[i]<='z'))))
	{
	memmove(temp+i,temp+i+1,strlen(temp+i)+1);

	i--;
	}
}

}

void case_change(char *temp)
{
int i;
for(i=0;temp[i];i++)
	{
	if((temp[i]>='A')&&(temp[i]<='Z'))
	temp[i]=temp[i]+32;

	}
}


void sort_char(char *temp)
{
char temp1;
int i,j,n;
n=strlen(temp);
for(i=0;i<(n);i++)
{
	for(j=i+1;j<(n);j++)
	{
		if(temp[i]>temp[j])
		{
		temp1=temp[i];
		temp[i]=temp[j];
		temp[j]=temp1;
		}
	}

}
}







