#include<stdio.h>
int isperfect(int a){
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0) sum+=i;
    }
    if(sum==a) return 1;
    else return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(isperfect(i)) printf("%d ",i);
    }
    printf("\n");
}