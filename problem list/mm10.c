#include<stdio.h>
#include<math.h>
int main(){
    float c;
    scanf("%f",&c);
    c=(c*1.8)+32;
    float result=round(c*10)/10;
    printf("%.1f\n",result);
}