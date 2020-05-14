#include<stdio.h>
#include<string.h>

int main()
{
char  arr[100000][22],query[22],oper[10];
    int N,i=0,j,cnt=0;
    
    scanf("%d",&N);
    
    while(N)
        {
        
        scanf("%s",oper);
        
        if(strcmp(oper,"add")==0)
            {
            scanf("%s",arr[i]);
            i++;
        }
        else if(strcmp(oper,"find")==0)
            {
            scanf("%s",query);
            
            for(j=0;j<i;j++)
                {
                if(strstr(arr[j],query))
                    cnt++;
                
            }
            printf("%d\n",cnt);
            cnt=0;
            
        }
N--;
}

}
