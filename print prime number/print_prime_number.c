#include<stdio.h>
#include"TYPE.h"
/*THIS FUNCTION TO CHACK IF NUMBER IS PRIME OR NOT*/
u32 Chack_u32Number(u32 u32Number);
u32 Chack_u32Number(u32 u32Number){
	u32 u32Counter=2,u32Flag=0;
	if(u32Number==2)
		u32Flag=0;
	else if(u32Number==1)
		u32Flag=1;
	else{
	while(u32Counter <= u32Number/2){ 
		if(u32Number%u32Counter==0){
			u32Flag=1;
		break;
		}
		else
			u32Flag=0;
		u32Counter++;
	}
	}
	
	return u32Flag;
}
/*THIS FUNCTION TO PRINT PRIME NUMBERS*/
void Print_voidPrime(u32 u32Small_number,u32 u32Large_number);
void Print_voidPrime(u32 u32Small_number,u32 u32Large_number){
	while(  u32Large_number-u32Small_number!=0){ 
		if(Chack_u32Number(u32Small_number)==0)printf("%d is prime number\n",u32Small_number); /*If number is prime print it.*/
		else;
		u32Small_number++;
	}
	
	
}

int main(){
	u32 u32Input1,u32Input2;
	printf("Enter Numbers you have chack it @ this form :ex:5  10 : ");
	scanf("%d  %d",&u32Input1,&u32Input2);
	Print_voidPrime(u32Input1,u32Input2);
	return 0;
}