#include<stdio.h>

void word(int num)
{

switch(num)
{
//	case 0:printf("zero");
//		break;
	case 1:printf("one ");
		break;
	case 2:printf("two ");
		break;	
	case 3:printf("three ");
		break;	
	case 4:printf("four ");
		break;	
	case 5:printf("five ");
		break;	
	case 6:printf("six ");
		break;	
	case 7:printf("seven ");
		break;	
	case 8:printf("eight ");
		break;	
	case 9:printf("nine ");
		break;	
	case 10:printf("ten ");
		break;	
	case 11:printf("eleven ");
		break;	
	case 12:printf("twelve ");
		break;	
	case 13:printf("thirteen ");
		break;	
	case 14:printf("fourteen ");
		break;	
	case 15:printf("fifteen ");
		break;	
	case 16:printf("sixteen ");
		break;	
	case 17:printf("seventeen ");
		break;	
	case 18:printf("eighteen ");
		break;	
	case 19:printf("nineteen ");
		break;	
	case 20:printf("twenty ");
		break;	
	case 30:printf("thirty ");
		break;	
	case 40:printf("forty ");
		break;	
	case 50:printf("fifty ");
		break;	
	case 60:printf("sixty ");
		break;	
	case 70:printf("seventy ");
		break;	
	case 80:printf("eighty ");
		break;	
	case 90:printf("ninety ");
		break;	
	case 100:printf("hundred ");
		break;	
	case 1000:printf("thousand ");
		break;	
	case 100000:printf("lakh ");
		break;	
	case 10000000:printf("crore ");
		break;	
}





}



void conv_rs(int ipart)
{

int rem,n;

if(ipart>=10000000)
{
	n=ipart/10000000;
	if(n<=20)
	word(n);
	else
	{
	word(n/10*10);
	word(n%10);
	}
	word(10000000);
	ipart=ipart%10000000;

}
if(ipart>=100000)
{
	n=ipart/100000;
	if(n<=20)
	word(n);
	else
	{
	word(n/10*10);
	word(n%10);
	}
	word(100000);
	ipart=ipart%100000;

}
if(ipart>=1000)
{
	n=ipart/1000;
	if(n<=20)
	word(n);
	else
	{
	word(n/10*10);
	word(n%10);
	}
	word(1000);
	ipart=ipart%1000;

}
if(ipart>=100)
{
	n=ipart/100;
	word(n);
	word(100);
	ipart=ipart%100;

}
if(ipart<=20)
	word(ipart);
{
	word(ipart/10*10);
	word(ipart%10);

}

}




main()
{
double f,fpart;
int ipart;
printf("enter the amount: ");
scanf("%lf",&f);

printf("\n");
ipart=(int)f;
fpart=f-ipart;


conv_rs(ipart);
printf(" Rupees. ");
conv_rs(fpart*100);
printf(" Paise. ");
printf("\n\n");
}
