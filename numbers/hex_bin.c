#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{

	char hex[20],ch;
	int i;
	char string[100];
	bzero(string,100);
	printf("enter a hexadecimal value: ");
	gets(hex);

	for(i=0;i<strlen(hex);i++)
	{
		if((hex[i]>='A')&&(hex[i]<='Z'))
			ch=hex[i]+32;
		else
			ch=hex[i];

		switch(ch)
		{
			case '0':strcat(string,"0000");
				 break;
			case '1':strcat(string,"0001");
				 break;
			case '2':strcat(string,"0010");
				 break;
			case '3':strcat(string,"0011");
				 break;
			case '4':strcat(string,"0100");
				 break;
			case '5':strcat(string,"0101");
				 break;
			case '6':strcat(string,"0110");
				 break;
			case '7':strcat(string,"0111");
				 break;
			case '8':strcat(string,"1000");
				 break;
			case '9':strcat(string,"1001");
				 break;
			case 'a':strcat(string,"1010");
				 break;
			case 'b':strcat(string,"1011");
				 break;
			case 'c':strcat(string,"1100");
				 break;
			case 'd':strcat(string,"1101");
				 break;
			case 'e':strcat(string,"1110");
				 break;
			case 'f':strcat(string,"1111");
				 break;
			default:printf("invalid value entered.\n");
				return;

		}

	}

	printf("binary value of entered value: %s\n\n",string);




}
