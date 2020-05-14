#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <assert.h>
//#include <limits.h>
//#include <stdbool.h>

int main(){
    int arr[6][6];
	int arr_i,arr_j;
    for(i = 0; i < 6; i++){
       for(j = 0; j < 6; j++){
          
          arr[i][j]=rand()%8+1;
       }
    }


    for(i = 0; i < 6; i++){
       for(j = 0; j < 6; j++){
          
          printf("%d  ",arr[i][j]);
       }
	printf("\n");
    }


//	for(i=0;i<6;i++)



    return 0;
}
