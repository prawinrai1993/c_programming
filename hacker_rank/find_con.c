#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N,query,j=0,flag=0;
    char name[100000][2][20],check[20],*ptr=name;
    
    scanf("%d",&N);
    
    for(int i;i<N;i++)
        for(j=0;j<2;j++)
             scanf("%s",name[i][j]);
        
 //       scanf("%d",&query);


    for(int i=0;i<N;i++)
        {
        flag=0;
      scanf("%s",check);
            
	/*
             if(strcmp(check,name[j][0])==0)
                 {
                 flag=1;
              printf("%s=%s\n",name[j][0],name[j][1]);
                 break;
             }
	*/
ptr=name;

 if(ptr=strstr(ptr,check))
            {
        for(int j=0;j<N;j++)
            {
             if(strcmp(check,name[j][0])==0)
                 {
                 flag=1;
              printf("%s=%s\n",name[j][0],name[j][1]);
                 break;
             }
                
             }
        }
		
                
         
                if(flag==0)
                printf("Not found\n");
            
    }
       
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


