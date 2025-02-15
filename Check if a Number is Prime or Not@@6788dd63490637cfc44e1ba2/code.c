// Your code here...
#include<stdio.h>
#include<ctype.h>
int main(){
    int x,i;
    flag = 0;
    scanf("%d",&x);
    if(x<=1){
        printf("Not Prime");
    }else{
        for(i=2;i<=x/2;++i){
            if(x%i==0){
             flag = 1;
             break;
             }
        }
        if(flag==0){
            printf("Prime");
        }else{
            printf("Not Prime");
        }
    } 
}