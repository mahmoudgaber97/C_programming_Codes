#include<stdio.h>
#include<assert.h>
#include"TYPE.h"
void GetReversArray(u32* u32PtrArray, u32 size);
void GetReversArray(u32* u32PtrArray, u32 size){

u32 u32Counter=size; /*store size value in counter*/
u32 u32Temp;
u32 *u33PtrLast=u32PtrArray; /*last pointer refer to first location on array*/
u32 *u33PtrFirst=u32PtrArray;/*first pointer refer to first location on array*/
while(u32Counter>1){
u33PtrLast++; /*make last pointer refer to last location on array */
u32Counter--;
}
/*toggle between locations on array */
while(u33PtrLast!=u33PtrFirst){
	u32Temp=*u33PtrLast;
	*u33PtrLast=*u33PtrFirst;  /*toggle between locations on array */
	*u33PtrFirst=u32Temp;
	u33PtrLast--;
	u33PtrFirst++;
}
/*print all elemnts on array*/
while(size!=0){
	printf("%d\n",*u32PtrArray);
	size--;
	u32PtrArray++;
}
}
int main(){
	u32 u32sizeM;
	printf("enter size of array  :  ");
	scanf("%d",&u32sizeM);
	u32 u32Array[u32sizeM];
	u32 *ptrMain=u32Array;
	for(int i=0;i<u32sizeM;i++){
	printf("enter element %d====>",i+1);
	scanf("%d",ptrMain);
	ptrMain++;
	}
	
	GetReversArray(u32Array,u32sizeM);
	return 0;
}