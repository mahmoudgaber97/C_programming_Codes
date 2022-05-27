#include<stdio.h>
#include"TYPE.h"
void Nearest_Void10Th(u32 u32Inputu_number);
void Nearest_Void10Th(u32 u32Inputu_number){
	u32 u32Rem;
	if(u32Inputu_number <=5) /*spicial condition to get ten for number between 0:5*/
		u32Inputu_number=10;
	
	
	else{
	u32Rem=u32Inputu_number%10;   /*chack nearest 10th*/
	if(u32Rem>=5)
	 u32Inputu_number=((u32Inputu_number/10)+1)*10;
	
	
    else
	
	 u32Inputu_number=( u32Inputu_number/10)*10;
	}
	 
	printf("the nearest 10th number is ===> %d ",u32Inputu_number);
}
int main(){
	u32 u32Main_Input;
	printf("enter ur Input : ");
	scanf("%d",&u32Main_Input);
	Nearest_Void10Th(u32Main_Input);
	
	return 0;
}