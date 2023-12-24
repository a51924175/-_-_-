#include<stdio.h>
int main(){
    int total_sec,day,hour,min,sec;
    scanf("%d",&total_sec);
    day=total_sec/86400,total_sec%=86400;
    hour=total_sec/3600,total_sec%=3600;
    min=total_sec/60,total_sec%=60;
    sec=total_sec;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",day,hour,min,sec);
}