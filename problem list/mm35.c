#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int isbiss=0;
    if(n%4==0) isbiss=1;
    if(n%100==0) isbiss=0;
    if(n%400==0) isbiss=1;
    if(isbiss) printf("Bissextile Year\n");
    else printf("Common Year\n");
}