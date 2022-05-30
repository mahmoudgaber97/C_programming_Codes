#include<stdio.h>
#include"TYPE.h"
#define FunData_Type  u8  /*u can configer Data type of functions and CHACK TYPE.h*/
#define ArrguData_Type  u32 /*u can configer Data type of arrguments and CHACK TYPE.h*/
FunData_Type Number_FunData_TypeOnes(ArrguData_Type u32Input1);
FunData_Type Number_FunData_TypeOnes(ArrguData_Type u32Input1){
u8 i,u8Counter=0;
for(i=0;i<32;i++){
	if((u32Input1&(1<<i)))
		u8Counter++;
	else;
	
}

return u8Counter;
}
int main(){
	
	ArrguData_Type ArrguData_TypeMain_Input;
	printf("enter ur number ====> ");
	scanf("%d",&ArrguData_TypeMain_Input);
	printf("Number of ones is equal ======> %d", Number_FunData_TypeOnes(ArrguData_TypeMain_Input));
	return 0;
}