#include<stdio.h>
void fun_1();
void fun_2();
void fun_3();
main()
{
fun_1();

printf("in function main\n\n");

fun_2();

printf("in main again\n\n");

fun_3();
}

void fun_1(void)
{


printf("in funtion 1\n\n");
//fun_3();

}

void fun_2(void)
{
printf("in function 2\n\n");

fun_3();
}

void fun_3(void)
{

printf("in function 3\n\n");

fun_1();


}

