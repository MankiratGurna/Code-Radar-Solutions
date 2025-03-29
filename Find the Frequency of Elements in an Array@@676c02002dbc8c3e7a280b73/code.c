// Your code here...
#include<stdio.h>
void freq(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    freq(arr,n);
}

void freq(int arr[],int n){
    int y[n];
    for(int i=0;i<n;i++){
        y[i]=0;
    }
    for(int i=0;i<n;i++){
        if(y[i]==1){
            continue;
        }

        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                y[j]=1;
            }
        }
        printf("%d %d \n",arr[i],count);
    }
    
}