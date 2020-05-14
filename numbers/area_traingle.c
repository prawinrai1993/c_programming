#include<stdio.h>

/******program to find valid traingle or not**********/


main()

{
float x,y,z,a;
printf("enter angles of traingle:");

printf("\nangle 1:");
scanf("%f",&x);

printf("\nangle 2:");
scanf("%f",&y);


printf("\nangle 3:");
scanf("%f",&z);
a=x+y+z;

printf("\n\n total angle=%f\n\n",a);
if(a==180)
{
printf("\n valid traingle\n");

}
else
{
printf("\n not valid traingle\n");
}


}



