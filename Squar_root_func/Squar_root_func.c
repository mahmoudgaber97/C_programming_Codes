#include<stdio.h>
#include <conio.h>
#include"TYPE.h"

 u32 Fun_u32GetSquarRoot(u32 u32Num);



int main (){
	u32 u32SquareRoot; 
	u32 u32Input;
	do{
	printf("enter number:");
	scanf("%d",&u32Input);
	u32SquareRoot=Fun_u32GetSquarRoot(u32Input);
	printf("%d\n",u32SquareRoot);
	}
	while(getch()!='E');
	return 0;
}

u32 Fun_u32GetSquarRoot(u32 u32Num){
	
	u32 u32Counter=0;
	u32 u32Reslut;

	while(u32Reslut!=u32Counter){
		u32Counter++;
		u32Reslut=u32Num/u32Counter;	
	}
	printf("The Squar root is ====> ");
	return u32Reslut;
}