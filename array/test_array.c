#include<stdio.h>
main()
{

char x[10],y;
int i=12;
printf("enter char values for x:\010",i);
//for(i=0;i<10;i++)
//scanf("%d",&x[i]);

scanf("%[^\n]s",x);
//gets(x);

//for(i=0;i<10;i++)
//printf("%c",x[i]);

puts(x);
printf("\n\n");


}
