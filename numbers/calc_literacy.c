#include<stdio.h>

main()
{
int total_pop,men_pop,women_pop;
float men_per,women_per;
float total_lit,men_ilit=0,women_ilit=0,total_ilit;
int total_men_pop,total_women_pop;

printf("\n\nenter total population=\n\n");
scanf("%d",&total_pop);
printf("\n\nenter total_men_population=");
scanf("%d",&total_men_pop);
total_women_pop=total_pop-total_men_pop;

printf("\n\nenter literate men_percentage=");
scanf("%f",&men_per);
printf("\n\nenter literate percentage of women=");
scanf("%f",&women_per);
men_pop=((men_per*total_pop)/100);

printf("\n\ntotal literate of men=%d",men_pop);

women_pop=((women_per*total_pop)/100);

printf("\n\nTotal literate  women=%d",women_pop);

total_lit=women_pop+men_pop;

printf("\n\ntotal literate population=%f",total_lit);

total_ilit=total_pop-total_lit;

printf("\n\ntotal_illiterate=%f",total_ilit);

men_ilit=total_men_pop-men_pop;

printf("\n\ntotal_illiterate men=%f",men_ilit);

women_ilit=total_women_pop-women_pop;

printf("\n\ntotal_illiterate women=%f\n\n",women_ilit);

}




