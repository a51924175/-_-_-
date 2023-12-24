#include<stdio.h>
int main(){
    int price,nt10,nt5,nt1;
    scanf("%d",&price);
    nt10=price/10;
    price=price%10;
    nt5=price/5;
    price=price%5;
    nt1=price;
    printf("NT10=%d\nNT5=%d\nNT1=%d\n",nt10,nt5,nt1);
}