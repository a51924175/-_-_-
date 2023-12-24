#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int time=n/35;
    unsigned long long sum=0;
    for(int i=0;i<=time;i++){
        sum+=i*35;
    }
    printf("%lld\n",sum);
}