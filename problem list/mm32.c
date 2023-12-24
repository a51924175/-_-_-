#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int first,second,third,tmp;
    tmp=n;
    first=tmp/100,tmp%=100;
    second=tmp/10,tmp%=10;
    third=tmp;
    if((first*first*first+second*second*second+third*third*third)==n) printf("YES\n");
    else printf("NO\n");
}