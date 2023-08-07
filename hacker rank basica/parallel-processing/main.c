
// Online C compiler to run C program online
#include <stdio.h>


int max(int size,int*arr){
    int element;
    int maxs=0;
    for(int i=0;i<size;i++)
    if(arr[i]>maxs)
    element=i;
    
    return element;
}


long minTime(int files_count, int* files, int numCores, int limit){
    long mintime=0;
    for(int i=0;i<files_count;i++)
    mintime+=files[i];

    mintime+=(files[max(files_count,files)]/numCores);
  
    mintime-=files[max(files_count,files)];
    
    return mintime;
}

int main() {
    int arr[5]={4,1,3,2,8};
    printf("%ld",minTime(5,arr,4,1));
  //printf("%d",max(3,arr));

    return 0;
}