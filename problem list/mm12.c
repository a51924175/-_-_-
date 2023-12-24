#include<stdio.h>
#include<math.h>
int main(){
    int dis;
    scanf("%d",&dis);
    double result=ceil((double)dis/0.238);
    printf("%.0f\n",result);
}