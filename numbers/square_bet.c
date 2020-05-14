#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,t,j,k,n1,n2,cnt=0,temp;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
        {
        scanf("%d %d",&n1,&n2);
        
        k=(int)sqrt(n1);
        temp=(int)sqrt(n2);
        if((int)pow(k,2)==n1)
            cnt++;
        else if((int)pow(k,2)<n1)
            temp+1;
        if((int)pow(temp,2)==n2)
             cnt++;
        else temp+=1;
        cnt+=(temp-k)-1;
      
        
     
           printf("%d\n",cnt);
           cnt=0;
        
        
        
        
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

