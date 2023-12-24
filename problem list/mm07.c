#include<stdio.h>
#include<stdlib.h>
int main(){
    long long a;
    scanf("%lld",&a);
    long long square=a*a;
    long long cube=a*a*a;
    printf("%lld,%lld,%lld\n",a,square,cube);
}