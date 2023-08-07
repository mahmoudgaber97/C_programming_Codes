// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **reshaip(int size, char **str) {
    char **arr = (char **)malloc(size * sizeof(char *));
    for (int i = 0; i < size; i++) {
        arr[i] = (char *)malloc(strlen(str[i]) + 1);
        strcpy(arr[i], str[i]);
    }
int max=0;
int ele=0;
char temp[15];

    int last = size - 1;
    for (int j = 0; j < size; j++) {
        for (int i = 0; i < size-j; i++) {
            if (strcmp(arr[i], arr[max]) >0) {
             //   strcpy(arr[],arr[i]);
               max = i;
            }
        }
        strcpy(temp, arr[max]);
        strcpy(arr[max],arr[last]);
        strcpy(arr[last],temp);
        last--;
     max=0;
    }

   str=arr;

    return str;
}



char** mostActive(int customers_count, char** customers, int* result_count){
    
    char **arr = (char **)malloc(customers_count * sizeof(char *));
    for (int i = 0; i < customers_count; i++) {
        arr[i] = (char *)malloc(strlen(customers[i]) + 1);
      
    }
  customers=reshaip(customers_count,customers);
   double count=1;
    int t=0,i=0;
    
    
    
    
    
    for( i=0;i<customers_count-1;i++)
    {
        if((strcmp(customers[i],customers[i+1]))==0)
        {
            count++;
            
            continue;
            
            
        }
        if((count/customers_count)>=(0.05))
        {
                 
            t++;
            arr=(char**)realloc(arr,t*sizeof(char*));
            arr[t-1]=customers[i];
            count=1;
        }
        
        
    }
    t++;
     arr=(char**)realloc(arr,t*sizeof(char*));
            arr[t-1]=customers[i];
     *result_count = t;
    return arr;
}



int main() {
    int r=7;
    int *x=&r;
    int n;
    scanf("%d",&n);
char **arr = (char **)malloc(n * sizeof(char *));
for (int i = 0; i < n; i++) {
arr[i] = (char *)malloc(sizeof(arr[0]));
  
}

for (int i = 0; i < n; i++)
scanf("%s",arr[i]);
char **ptr = mostActive(n, arr,x);
printf("____________________________________\n");
for (int i = 0; i < 3; i++) {
printf("%s\n", ptr[i]);
}
return 0;
}