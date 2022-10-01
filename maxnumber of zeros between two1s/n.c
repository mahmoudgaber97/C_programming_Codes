#include"stdio.h"

void numzero(unsigned char x);
void numzero(unsigned char x){

int  i,j,count=0,max=0;
for(i=0;i<8;i++){

if(((x>>i)&1)==1){
for(j=i+1;j<8;j++){
if(!((x>>j)&1))
{

count++;

}
else{

  if(max<count){
    max=count;
    count=0;
    i=j-1;
    break;
  }
}
}
}




}
printf("%d",max);
}
int main(){
  
numzero(197);

  return 0;
}