#include<stdio.h>


int global;

main()

{

int local;
static int y;
//register int x;
volatile int z;

printf("\naddress of local variable=%p",(unsigned int)&local);

printf("\naddress of static variable=%p",(unsigned int)&y);

printf("\naddress of global variable=%p",(unsigned int)&global);

printf("\naddress of main function=%p\n\n",(unsigned int)&main);

//printf("\naddress of register variable=%u",(unsigned int)&x);

printf("\naddress of volatile variable=%p\n\n",(unsigned int)&z);


//printf("\naddress of extern variable=%p\n\n",(unsigned int)&i);
}
