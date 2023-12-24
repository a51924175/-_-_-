#include<stdio.h>
#include<math.h>
int main(){
    int sec;
    scanf("%d",&sec);
    float fee;
    if(sec<=800) fee=sec*0.9;
    else if(sec>800 && sec<1500) fee=sec*0.9*0.9;
    else fee=sec*0.9*0.79;
    float result=round(fee*10)/10;
    printf("%.1f\n",result);
}