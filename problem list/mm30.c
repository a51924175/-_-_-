#include<stdio.h>
int main(){
    int n;
    int isPrime=1;
    scanf("%d",&n);
    for(int i=n-1;i>1;--i){
        if(n%i==0){
            isPrime=0;
            break;
        }
        isPrime=1;
    }
    if(isPrime==0) printf("NO\n");
    else printf("YES\n");

}