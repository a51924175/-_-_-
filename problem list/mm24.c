#include<stdio.h>
#include<math.h>
int main(){
    int times,paid;
    scanf("%d %d",&times,&paid);
    int first,second,third;
    if(times>=60? first=60:times);
    if(times>120? second=60:times-60);
    third=times-120;
    if(third<0) third=0;
    float sum=(first*paid)+(second*paid*1.33)+(third*paid*1.66);
    sum=round(sum*10)/10;
    printf("%.1f\n",sum);
}