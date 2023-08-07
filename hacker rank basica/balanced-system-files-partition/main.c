
// Online C compiler to run C program online
// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int mostBalancedPartition(int parent_count, int* parent, int files_size_count, int* files_size){
    for(int i=parent_count-1;i>0;i--)
    files_size[parent[i]]+=files_size[i];
    
    int mindiff=files_size[0];
    int diff=mindiff;
    for(int i=1;i<files_size_count;i++){
        
        diff=abs(files_size[0]-2*files_size[i]);
        mindiff=(diff<mindiff)?diff:mindiff;
        
    }
    return mindiff;
    
    
}
int main() {
    int n;
    scanf("%d",&n);
    int parant[6];
    int filesize[n];
    for(int i=0;i<n;i++)
    scanf("%d",&parant[i]);
    for(int i=0;i<n;i++)
    scanf("%d",&filesize[i]);
    printf("%d", mostBalancedPartition(n,parant,n,filesize));
    
    

    return 0;
}