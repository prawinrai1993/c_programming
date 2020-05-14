#include<stdio.h>
#include<string.h>

main()
{
int rows,cols,i,j;
int str[][5]={{11,22,33,44,55},{1,2,3,4,5},{111,222,333,444,555}};

rows=sizeof(str)/sizeof(*str);
cols=sizeof(*str)/sizeof(**str);


for(i=0;i<rows;i++,printf("\n\n"))
for(j=0;j<cols;j++)
printf("%4d",str[i][j]);


}
