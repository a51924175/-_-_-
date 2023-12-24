#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        int tmp=a;
        a=b,b=tmp;
    }
    unsigned long long sum=0;
    for(int i=a;i<=b;i++){
        sum+=i;
    }
    printf("%lld\n",sum);
}