#include<stdio.h>
#include"TYPE.h"
u32 u32SummationValue;  /*this varable must be global to initializes one time by 0*/
u32 Summation_u32numbers(u8 u8Initnumber);
u32 Summation_u32numbers(u8 u8Initnumber){
	
	
	if(u8Initnumber<=100){
		u32SummationValue+=u8Initnumber;
		u8Initnumber++;
		Summation_u32numbers(u8Initnumber);
		return u32SummationValue;
	}
	
	
}
int main(){
	u8 u8InitValue;
	printf("enter number ");
	scanf("%d",&u8InitValue);
	printf("VALUE IS %d",Summation_u32numbers( u8InitValue));
	
	return 0;
	
}