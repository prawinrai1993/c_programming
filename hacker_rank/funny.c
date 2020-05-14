#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int T,i,j,k,l;
    char str[10000],rev[10000];

    scanf("%d",&T);
    for(i=0;i<T;i++)
        {
	getchar();    
        scanf("%[^\n]s",str);
        for(k=strlen(str)-1,l=0;k>=0;k--,l++)
            rev[l]=str[k];
	rev[strlen(str)]='\0';
	printf("%s.......\n",rev);        
        for(j=1;j<strlen(str);j++)
        {
		if(abs(str[j]-str[j-1])==abs(str[j-1]-str[j]));
		else
		break;
		
		printf("%d %d.............\n\n",abs(str[j]-str[j-1]),abs(str[j-1]-str[j]));
        }

        if(j==strlen(str))
        printf("funny\n");
        else
            printf("not funny\n");
    }
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
