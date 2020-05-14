#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int count_str(char *s1,char *s2);
char * replace_str(char *s1,char *s2);
char * hide_str(char *s1,char *s2,char *temp);
char * remove_str(char *s1,char *s2);
int last_occurence(char *s1,char *s2);


main()
{
char s1[100],s2[100],temp[100];
int choice;

while(1)
{

printf("\n**************menu***************\n");
printf("\t1: Input string S1\n\t2: Input string S2\n\t3: count number of occur of s2 in s1\n");
printf("\t4: replace all occur s2 with reverse of s2\n\t5: Hide all occur of s2 in s1\n");
printf("\t6: Remove all occur of s2 from s1\n\t7: find the last occur of s2 in s1\n\t8: Print S1 and S2\n\t9: Quit\n\n");

printf("enter a choice from above given menu: ");
scanf("%d",&choice);
while(getchar()!='\n');


switch(choice)
{
case 1 :printf("\nenter string S1:");
	gets(s1);
	break;

case 2 :printf("\nenter string S2:");
	gets(s2);
	break;

case 3 :printf("\nNumber of occurence: %d\n",count_str(s1,s2));
	break;

case 4 :printf("\nafter replacing all occurences:%s\n",replace_str(s1,s2));
	break;

case 5:printf("\nAfter Hiding all ocurrence with * :%s\n",hide_str(s1,s2,temp));	    break;

case 6:printf("\nAfter removing all ocurrences : %s\n",remove_str(s1,s2));
	break;

case 7:printf("\nLast ocurrence of s2 in s1:%d\n",last_occurence(s1,s2));
	break;

case 8:printf("\nString S1:%s\n\nString S2:%s\n\n",s1,s2);
	break;

case 9:exit(0);

default:printf("\n\nInvalid Input given!!!!!!!!!!!!\n\n");


}

}

}


//******function to find number of occurence of s2 in s1***********//

int count_str(char *s1,char *s2)
{
int cnt=0;
char *ptr;
ptr=s1;

while(ptr=strstr(ptr,s2))
{
cnt++;
}
//printf("\n\ncount=%d\n\n",cnt);
return cnt;
}

//**************function to replace s2 occur in s1 with s2 reverse*******//

char * replace_str(char *s1,char *s2)
{

char *ptr,temp[100];
int i,j;
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
return s1;
//printf("\n\n%s\n\n",s1);

}


////***************function to hide content of s1************//

char * hide_str(char *s1,char *s2,char *temp)
{

char *ptr;
int i;
char star[100];

for(i=0;i<100;i++)
{
star[i]='*';
}

strcpy(temp,s1);

ptr=temp;
while(ptr=strstr(ptr,s2))
{
memmove(ptr,star,strlen(s2));
ptr++;

}
return temp;
//printf("\n\n\n%s\n\n\n",temp);

}

//**************function to remove all occur of s2 from s1***********//

char * remove_str(char *s1,char *s2)
{

char *ptr;

ptr=s1;
while(ptr=strstr(ptr,s2))
{
memmove(ptr,ptr+strlen(s2),strlen(ptr));
ptr++;
}
return s1;
//printf("\n\n\n%s\n\n",s1);

}

//****************function to find last occurence***********//

int last_occurence(char *s1,char *s2)
{
int i;
char *ptr;

ptr=s1;
while(ptr=strstr(ptr,s2))
{
i=ptr-s1;
ptr++;
}

return i;

}





