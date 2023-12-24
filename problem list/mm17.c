#include<stdio.h>
int findGCF(int a,int b){
    while(b!=0){
        int tmp=b;
        b=a%b;
        a=tmp;
    }
    return a;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d\n",findGCF(x,y));
}