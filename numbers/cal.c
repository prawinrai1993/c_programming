#include<stdio.h>

main()
{

int yy,dd,mm,leap,dp;

do
{
printf("enter year : ");
scanf("%d",&yy);
}while(!((yy>0)&&(yy<999999999)));

do
{
printf("enter month : ");
scanf("%d",&mm);
}while(!((mm>0)&&(mm<13)));


do
{
printf("enter day : ");
scanf("%d",&dd);
}while(!((dd>0)&&(dd<32)));


if(((mm==4)||(mm==6)||(mm==9)||(mm==11))&&(dd>30))
{
	printf("invalid date!!!!\n");
	return;

}



if((yy%4==0)&&(yy%100!=0)||(yy%400==0))
{
	if((mm==2)&&(dd>29))
	{
		printf("invalid date!!!!\n");
		return;
	}
	

}
else
{
	if((mm==2)&&(dd>28))
	{
		printf("invalid date!!!!\n");
		return;
	}

}

leap=((yy-1)/4)-((yy-1)/100)+((yy-1)/400);
dp=(yy-1)*365+leap;


switch(mm)
{

	case 12:dp+=30;
	case 11:dp+=31;
	case 10:dp+=30;
	case 9:dp+=31;
	case 8:dp+=31;
	case 7:dp+=30;
	case 6:dp+=31;
	case 5:dp+=30;
	case 4:dp+=31;
	case 3:dp+=28;
	case 2:dp+=31;
	case 1:dp+=dd;
}


if(((yy%4==0)&&(yy%100!=0)||(yy%400==0))&&(mm>2))
dp++;
printf("day on %d/%d/%d is>>>>",dd,mm,yy);


switch(dp%7)
{
	case 1:printf("monday \n\n");
		break;

	case 2:printf("tuesday \n\n");
		break;
	case 3:printf("wednesday \n\n");
		break;
	case 4:printf("thursday \n\n");
		break;
	case 5:printf("friday \n\n");
		break;
	case 6:printf("saturday \n\n");
		break;
	case 0:printf("sunday \n\n");
		break;

}




}
