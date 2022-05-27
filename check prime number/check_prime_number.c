#include<stdio.h>
#include"TYPE.h"
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
int main(){
	u32 u32Input;
	printf("Enter Number you have chack it : ");
	scanf("%d",&u32Input);/*
	if(Chack_u32Number(u32Input)==0)
		printf("The number is prime");
	else
	printf("The number is NOT prime");
*/

/*------------------------OR------------------------*/
(Chack_u32Number(u32Input)==0)?printf("The number is prime"):printf("The number is NOT prime");

	return 0;
}