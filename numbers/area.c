#include<stdio.h>
#define pi 3.14

main()
{
	
	int i,l,b,r,area_rect=0;
	float area_circle=0;

printf("\n\n**********software to calc area of rect and circle*********\n\n");
while(1)
{
printf("select: \n\n1:area and perimeter of rect\n\n2:area of circle\n\n");

scanf("%d",&i);

switch(i)
{
case 1:printf("\n\nenter length and breadth=");
	scanf("%d%d",&l,&b);
	area_rect=l*b;
	int perimeter=2*(l+b);
	printf("perimeter of rectangle=%d",perimeter);
	printf("\n\narea of rect=%d\n\n",area_rect);
	break;
case 2:printf("\n\nenter radius=");
	scanf("%d",&r);
	area_circle=pi*r*r;
	printf("\n\narea of circle=%f\n\n",area_circle);
	
	break;
	
}
}
}


