
#include <stdio.h>
#include<stdlib.h>

int longestSubarray(int arr_count, int* arr){
    int count=1,max=1;
    int flag=0,x;

    for(int i=0;i<arr_count-1;i++){
    for( int j=i+1;(j<arr_count+1);j++)
    {
        
        if(abs(arr[i]-arr[j])<=1){
            
           

        count++;
   
       
        }
        else
        { 
        if(max<count){
        max=count;
    }
        
       count=1;
       break;
           

      
   }
       
    }
   
    }
    
    return max;
}

int main() {
    int num;
   scanf("%d",&num);
   int arr[num];
   for(int i=0;i<num;i++)
   scanf("%d",&arr[i]);
   printf("%d",longestSubarray(num,arr));

    return 0;
}