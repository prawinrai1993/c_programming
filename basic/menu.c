#include<stdio.h>


////////program for menu/////////

int sum_digit(int a);
int reverse_num(int a);
int cnt_digit(int a);
int odd_digits(int a);
long long int factorial(int a);
void odd_even(int a);
void prime_check(int a);
main()

{

char i='i',s='s',r='r',c='c',o='o',q='q',f='f',e='e'/*p='p'*/,x;
int y,z,a,b,sum,reverse,cnt,odd,flag=0,odd_ev;
long long int fact;


while(x!=q)
{
printf("\n\t\t\tEnter choice from given menu:\n\n\n'i': Input integer\n's': Sum of digits\n");
printf("'r': Reverse entered digit\n'c': Count digits\n'o': Odd digits in number\n'f': Factorial ofnumber\n'e': Find odd or even number\n");
printf("\n'q': Quit\n\n");

printf("Enter Choice:");
if(flag==0)
{
printf("\n\nSorry you have not entered interger:\n");
goto input;
}
scanf("%c",&x);

if(x==i)
{
input:
printf("\n\nInput an Integer:");
scanf("%d",&a);
flag=1;
}
else if(x==s)
{
sum=sum_digit(a);
printf("\nEntered Number:%d",a);
printf("\n\nSum Of Digits=%d\n\n",sum);

}
else if(x==r)
{
reverse=reverse_num(a);
printf("\nEntered Number:%d",a);
printf("\n\nReversed Number Is=%d\n\n",reverse);
}
else if(x==c)
{
cnt=cnt_digit(a);
printf("\nEntered Number:%d",a);
printf("\n\nCount Of Digits=%d\n\n",cnt);
}
else if(x==o)
{
odd=odd_digits(a);
printf("\nEntered Number:%d",a);
printf("\n\nOdd Digits=%d\n\n",odd);
}
else if(x==f)
{
if(a<21)
{
fact=factorial(a);

printf("\nEntered Number:%d",a);
printf("\n\nFactorial of number=%Ld",fact);
}
printf("\n\nOut of range factorial for operation!!!!\n\n");
}

else if(x==e)
{

printf("\nEntered number:%d",a);
odd_even(a);
}
/*
else if(x==p)
{
printf("\nEntered number:%d\n",a);
prime_check(a);

}
*/
else if(x==q)
{
printf("\n\nQuiting Menu Program!!!!\n\n");
return;
}
else
{
printf("\n\nWrong Choice Entered!!!!!!!!!!!!!\n\n");
}
getchar();
}

}


int sum_digit(int a)
{
int sum=0,x;
while(a!=0)
{
x=a%10;
a=a/10;
sum=sum+x;
}
return sum;
}


int reverse_num(int a)
{
int rev=0,x;
while(a!=0)
{
x=a%10;
a=a/10;
rev=rev*10+x;

}
return rev;
}


int cnt_digit(int a)
{
int cnt=0;
while(a!=0)
{
a=a/10;
cnt++;

}
return cnt;
}



int odd_digits(int a)
{
int odd=0,x;

while(a!=0)
{
x=a%10;
a=a/10;
if(x%2!=0)
odd++;
}
return odd;
}

long long int factorial(int a)
{

long long int fact=1;

while(a>0)
{
fact=fact*a;
a--;
}

return fact;

}

void odd_even(int a)
{
int odd_ev;
if(a%2)
printf("\n\nEntered number is odd");
else
printf("\n\nEntered number is even");

return;

}

/*void prime_check(int a)
{
if((a%3)||(a%5)||(a%7)||(a%13)||(a%11))
printf("\nnot a prime number\n\n");
else
printf("\nprime number\n\n");

}
*/
