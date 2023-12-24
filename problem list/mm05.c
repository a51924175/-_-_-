#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    double length;
    double area=(length*length);
    double result=round(area*10)/10;
    printf("%.1lf\n",result);
}