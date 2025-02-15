// Your code here...
#include<stdio.h>
#include<ctype.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=1){
        for(i=2;i<=x/2;++i){
            if(x%i!=0){
                printf("Prime");
            }else("Not Prime");
        }
    }else{
        printf("Not Prime");
    }
}