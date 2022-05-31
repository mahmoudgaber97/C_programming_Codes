#include<stdio.h>
#include"TYPE.h"
void Convert_VoidFun(ArrguData_Type ArrguData_TypeInput1);
void Convert_VoidFun(ArrguData_Type ArrguData_TypeInput1){
	u8 u8Countier[(sizeof(ArrguData_Type)*8)-1],u8Counter,u8Counter2=0;
	 
	for(u8Counter=0; u8Counter<(sizeof(ArrguData_Type)*8)-1;u8Counter++) /*u8Counter<(sizeof(ArrguData_Type)*8)-1====>u8counter<31*/
		u8Countier[u8Counter]=(1&(ArrguData_TypeInput1>>u8Counter));	/*right shifting by 1 and &1*/
		/*ignorring the left zeros*/
	while(!(u8Countier[u8Counter])){ 
		
		u8Counter--;	
		u8Counter2++;
	}
	u8Counter++;
	
	do{
		u8Counter--;
		printf("%d",u8Countier[u8Counter]);		
		
	}
	
	while(u8Counter>0);
		
	
	
}

int main(){
	
	ArrguData_Type u32MainInput;
	printf("Enter ur number to chack it :  ");
	scanf("%d",&u32MainInput);
	printf("Binary number is ======>0b");
		Convert_VoidFun(u32MainInput);
	return 0;
}