#include<stdio.h>


main()
{

	char **ptr[20];

char *str1,*str2,str3[20],str4[20];
printf("enter ptr: ");
gets(str3);
printf("enter str: ");
gets(str4);

str1=str3;
str2=str4;

ptr[0]=&str1;
ptr[1]=&str2;


printf("ptr[0][0]=%s......\n",ptr[0][0]);
printf("ptr[1][0]=%s......\n",ptr[1][0]);

}
