#include<stdio.h>
#include"TYPE.h"
u32 Summation_u32Digits(u32 u32Iputnumber);
u32 Summation_u32Digits(u32 u32Iputnumber){
	
		u32 u32Rem, u32Summation=0;
	while(u32Iputnumber!=0)
	{
		 u32Rem=u32Iputnumber%10; /*this equation help u to swear digits*/
		 u32Summation+=u32Rem;
		 u32Iputnumber/= 10;
		
	}
	return u32Summation;
}
int main(){
	
	u32 u32MainInput;
	printf("enter ur input number : ");
	scanf("%d",&u32MainInput);
	printf("THE summation of digits of this number are equal ======> %d",Summation_u32Digits(u32MainInput));
	
	return 0;
}