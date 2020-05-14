#include<stdio.h>

main()
{
int x1,x2,x3,y1,y2,y3;
printf("\nenter first co-ordinates (x1,y1)= ");
scanf("%d %d",&x1,&y1);


printf("\nenter second co-ordinates (x2,y2)= ");
scanf("%d %d",&x2,&y2);



printf("\nenter third co-ordinates (x3,y3)= ");
scanf("%d %d",&x3,&y3);

if(((x1==x2)&&(x1==x3))||((y1==y2)&&(y1==y3)))
{

printf("\n\nentered co-ordinates is a straight line:\n\n");

}
else
{
printf("\n\n entered co-ordinates is not a straight line\n\n");
}


}














