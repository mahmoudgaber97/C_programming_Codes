#include<stdio.h>
#include"TYPE.h"
enum Boolean{false,true};
u8 Chack_u8Based2(u32 u32Iputnumber);
u8 Chack_u8Based2(u32 u32Iputnumber){
	if(u32Iputnumber>1){
	if(u32Iputnumber!=0 &&(u32Iputnumber&(u32Iputnumber-1))==0)/*
	
	if(u32Iputnumber!=0) &&             (u32Iputnumber)&(u32Iputnumber-1)==0
	
	*/
	return true;
	else
	return false;
	}
	else return false;
}
int main(){
	
	u32 u32MainInput;
	printf("enter ur input number : ");
	scanf("%d",&u32MainInput);
	Chack_u8Based2(u32MainInput)?printf("Based on two"):printf("it does not based on two");
	
	return 0;
}
