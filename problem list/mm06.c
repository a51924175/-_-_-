#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int mile;
    double km=mile*1.6;
    double result=round(km*10)/10;
    printf("%.1lf\n",result);
}