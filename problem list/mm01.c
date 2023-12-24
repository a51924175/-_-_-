#include<stdio.h>
#include<stdlib.h>
int main(){
    int upper,lower,height;
    printf("%d %d %d\n",upper,lower,height);
    float area;
    area=(((upper+lower)*height)/2);
    printf("Trapezoid area:%.1f\n",area);
}