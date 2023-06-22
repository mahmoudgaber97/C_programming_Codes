#include"stdio.h"
#include"stdbool.h"
#include"math.h"

int  *state_based3(int *arr,int size);
int *state_based3(int *arr,int size){
for(int i=0;i<size-1;i++)
	for(int j=i+1;j<=size;j++)
	{

		if(arr[i]!=0)
			if(arr[i]==arr[j])
				arr[j]=0;
	}

return arr;
	
}

int main(){
	int x[7]={1,2,1,1,2,4,4};
	int size=7,*ptr=state_based3(x,size);
	
	for(int i=0;i<size;i++)
		printf("%d",ptr[i]);



return 0;
}