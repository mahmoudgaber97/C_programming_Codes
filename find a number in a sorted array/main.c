#include<stdio.h>
#include"TYPE.h"
u32 GetSearched_u32Number( u32 u32SizeArray,u32 u32searchedNumber);
u32 GetSearched_u32Number( u32 u32SizeArray,u32 u32searchedNumber){
	u32 *Ptr_Incrmment;
	u32 u32container[u32SizeArray];
	u32 u32Count=1;
	/*this section to enter elements*/
	Ptr_Incrmment=u32container;
	for(int i=0;i<u32SizeArray;i++){
	printf("enter element number %d=====> ",i);
	scanf("%d",Ptr_Incrmment);
	Ptr_Incrmment++;
	}
	/*this section to research about some number*/
	Ptr_Incrmment=u32container;
	for(int i=0;i<u32SizeArray;i++){
	if(*Ptr_Incrmment==u32searchedNumber){
		printf("number %d is in element %d\n",u32searchedNumber,u32Count);

	}
	Ptr_Incrmment++;
	u32Count++;
	if(i!=u32SizeArray)
		continue; /*to make sure pointer chack all element*/
	return 1; /*to exist if number have been found */
	}
	printf("Number is not exist!!!!");
	return 0;
}

u32 main(){
	u32 u32ArraySize ,u32SearchedNumber;
	printf("Enter array size :: ");
	scanf("%d",&u32ArraySize);
	printf("Enter searched number :: ");
	scanf("%d",&u32SearchedNumber);
	GetSearched_u32Number(u32ArraySize,u32SearchedNumber);
	
	return 0;
}