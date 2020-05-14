#include<stdio.h>

main()
{

int x,y,i;

printf("\nenter class obtained:\n1:first class\n2:second class\n3:pass class\n");

scanf("%d",&i);

switch(i)
{
case 1: printf("\n\nentered class first class:");
	printf("\n\nenter no of subjects failed:");
	scanf("%d",&x);
	if(x>3)
	printf("\nno grace marks allotted:\n");
	else if(x<=3)
	printf("\ngrace marks of 5 alloted o each subject\n\n");
	break;
case 2: printf("\n\nentered class second class:");
	printf("\n\nenter no of subjects failed:");
	scanf("%d",&x);
	if(x>2)
	printf("\nno grace marks allotted:\n");
	else if(x<=2)
	printf("\ngrace marks of 4 alloted o each subject\n\n");
	break;

case 3: printf("\n\nentered class pass class:");
	printf("\n\nenter no of subjects failed:");
	scanf("%d",&x);
	if(x>1)
	printf("\nno grace marks allotted:\n");
	else if(x<=1)
	printf("\ngrace marks of 5 alloted o each subject\n\n");
	break;
default :printf("\n\ninvalid class entered\n\n");
	break;
}
}
