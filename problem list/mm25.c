#include<stdio.h>
int main(){
    int n;
    long long sum=0;
    scanf("%d",&n);
    int time=n/3;
    for(int i=1;i<=time;i++){
        sum+=i*3;
    }
    printf("%lld\n",sum);
}