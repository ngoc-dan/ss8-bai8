#include<stdio.h>
#include <stdlib.h>
int main(){
int i,j,sum=0;
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    	for( i=2 ; i>=0 ; i--){
    		  			
    			printf("%d \n",arr[abs(i-2)][i]);
    			sum=sum+arr[abs(i-2)][i];
    				
    	}
    
    printf("\n");
    printf("tong la : %d",sum);
    return 0;
}
