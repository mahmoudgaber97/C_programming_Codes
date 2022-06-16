#include<stdio.h>
#include"TYPE.h"
u32 u32fraction=1;
u32 Fractionu32NUmber(u32 InputNumber);
u32 Fractionu32NUmber(u32 InputNumber){
	
	if(InputNumber>=1){
		u32fraction*=InputNumber;
		InputNumber--;
		Fractionu32NUmber(InputNumber);
		return u32fraction;
	}
	
}
u32 main(){
	u32 u32UserInput;
	printf("enter number  ");
	scanf("%d",&u32UserInput);
	printf("%d",Fractionu32NUmber(u32UserInput));
	
	return 0;
}