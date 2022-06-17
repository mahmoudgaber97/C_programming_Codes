#include<stdio.h>
#include<assert.h>
#include"TYPE.h"
u8 Add_u8UnsignedChar(u8 u8Num1, u8 u8Num2);
u8 Add_u8UnsignedChar(u8 u8Num1,u8 u8Num2){
	u32 u8Sum=u8Num1+u8Num2;
	printf("%d",u8Sum);
	assert(u8Num1+u8Num2<=255); /*if u8Num1+u8Num2>255 you will get huge erorr*/
		
		
		return u8Num1+u8Num2;

	
}
int main(){
	u8 u8InputNum1=10,u8InputNum2=200,res;
	
	
	res=Add_u8UnsignedChar(u8InputNum1,u8InputNum2);
	
		printf("the rsult is=====> %d",(u8)res);
	
	
	return 0;
}