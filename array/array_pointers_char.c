#include<stdio.h>
void * xmemmove(void* ,void *,int );

main()
{

char *ptr[20];

char x[10]="praveen",y[10]="cool!!",i;
char a[10]="chandu",b[10]="12345";



ptr[0]=x;
ptr[1]=y;
ptr[2]=a;
ptr[3]=b;

xmemmove(ptr+7,ptr+0,sizeof(char *));
xmemmove(ptr+8,ptr+1,sizeof(char *));
xmemmove(ptr+9,ptr+2,sizeof(char *));
xmemmove(ptr+10,ptr+3,sizeof(char *));

printf("ptr[7]=%s............\n",ptr[7]);

printf("ptr[8]=%s........\n",ptr[8]);

printf("ptr[9]=%s.........\n",ptr[9]);

printf("ptr[10]=%s.......\n",ptr[10]);


}
