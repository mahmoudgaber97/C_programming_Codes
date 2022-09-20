#include <stdio.h>
#include <stdlib.h>
#include"string.h"
#include"math.h"

	
	void swap(int *arr1,int *arr2,int size);
    void revers(int *rarr1,int *rarr2,int rsize);
    void printArrays(int *parr1,int *parr2,int psize);
    void swap(int *arr1,int *arr2,int size){

int z,i;
for(i=0;i<size;i++){

z=arr1[i];
arr1[i]=arr2[i];
arr2[i]=z;

}

    }
void revers(int *rarr1,int *rarr2,int rsize)
{
    int b,c,i;
    for(i=0;i<rsize/2;i++){
   b=rarr1[i];
   rarr1[i]=rarr1[rsize-i-1];
   rarr1[rsize-i-1]=b;
    c=rarr2[i];
   rarr2[i]=rarr2[rsize-i-1];
   rarr2[rsize-i-1]=c;

}
}

void printArrays(int *parr1,int *parr2,int psize){
    int i;
printf("array one:\n");
for(i=0;i<psize;i++){

    printf("element %d is %d\n",i,parr1[i]);
}
printf("_______________________________________\n");
printf("array two:\n");
for(i=0;i<psize;i++){

    printf("element %d is %d\n",i,parr2[i]);
}

}


int main()
{
   int arrm1[5]={1,2,3,4,5};
   int arrm2[5]={6,7,8,9,10};
   int sizm=5;


    swap(arrm1,arrm2,sizm);
   revers(arrm1,arrm2,sizm);
   printArrays(arrm1,arrm2,sizm);
    
        

   

    return 0;
    }
