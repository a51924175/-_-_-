#include<stdio.h>
int main(){
    int n;
    unsigned long long a=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a*=i;
    }
    printf("%llu\n",a);
}   