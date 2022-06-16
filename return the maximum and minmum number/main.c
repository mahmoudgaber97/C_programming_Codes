#include<stdio.h>
#include"TYPE.h"
void Maxu32Number(u32 *u32PtrMax, u32 u32Size);
void Maxu32Number(u32 *u32PtrMax, u32 u32Size){
	
	u32 *u32PtrMin=u32PtrMax;
	u32 u32MaxValue=*u32PtrMax ,u32MinValue=*u32PtrMin;
	for(int i=0;i<u32Size-1;i++){
		u32PtrMin++;
		u32PtrMax++;
		if((*u32PtrMax)>u32MaxValue)
		u32MaxValue=*u32PtrMax;
	if((*u32PtrMin)<u32MinValue)
		u32MinValue=*u32PtrMin;
	
	}
	printf("MAX value is ====> %d \nMIN value is ====> %d",u32MaxValue,u32MinValue);
	
}

u32 main(){
	u32 u32MainSIZE;
	printf("enter array size  :  ");
	scanf("%d",&u32MainSIZE);
	u32 InputArray[u32MainSIZE];
	for(int i=0;i<u32MainSIZE;i++){
		printf("enter element number %d :: ",i+1);
	scanf("%d",&InputArray[i]);
	}
	Maxu32Number(InputArray,u32MainSIZE);
	return 0;
}