#include<stdio.h>
#include"TYPE.h"
u32 Revers_u32Number(u32 InputNumber);
u32 Revers_u32Number(u32 InputNumber){
	 u32 u32Rem;
	 static u32 u32Revers=0;
	 if(InputNumber!=0){
		 u32Rem=InputNumber%10;
		u32Revers=u32Revers*10+u32Rem;  /*ex 123====st1  30, st2 2 +30     st3 300+20+1====>321*/
		
		InputNumber/=10;
		Revers_u32Number(InputNumber);
		
		}
		return u32Revers;
	
}
int main(){
	
	u32 u32MainInput;
	printf("enter ur input number : ");
	scanf("%d",&u32MainInput);
	printf("THE summation of digits of this number are equal ======> %d",Revers_u32Number(u32MainInput));
	
	return 0;
}