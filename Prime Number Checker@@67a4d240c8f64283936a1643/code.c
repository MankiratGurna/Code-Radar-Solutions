#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        int isprime=1;
        if(num<=1){
            isprime=0;
        }else{
            for(int i=2;i<=num/2;++i){
                if(num%i==0){
                    isprime=0;
                    break;
                }
            }
        }printf("%d",isprime);
    }
    printf("%d",isprime);
    return 0;
}