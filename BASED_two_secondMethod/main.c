#include<stdio.h>
#include"TYPE.h"

void Chack_VoidBased2(u32 u32Iputnumber);
void Chack_VoidBased2(u32 u32Iputnumber){
	u32 u32File_counter=0;
	if(u32Iputnumber > 1){
	for(u32 u32Local_counter=1;((u32Local_counter<=32)&&(u32Iputnumber>0));((u32Iputnumber>>=1),u32Local_counter++))/*
	u32Iputnumber shift right one every cycle to u32Local_counter=32 or u32Iputnumber not equal zero  */
	{
		
	if(u32Iputnumber&1!=0) /*if u32Iputnumber&1!=0 it means the first bit is equal 1 but to know if its based ont two 
its mean u32File_counter count just one time due to all number based on two has just one on some_bit expect number 1
ex: 2=>>00000010
    4=>>00000100
	8=>>00001000
	.
	.
	.
	.
	*/
			u32File_counter++;
	}
	if(u32File_counter==1)
		printf("THIS NUMBER BASED @ 2");
	else
		printf("THIS NUMBER DOES NOT BASED @ 2");
	}

	else
		printf("THIS NUMBER DOES NOT BASED @ 2");
}
int main(){
	
	u32 u32MainInput;
	printf("enter ur input number : ");
	scanf("%d",&u32MainInput);
	Chack_VoidBased2(u32MainInput);
	return 0;
}
	