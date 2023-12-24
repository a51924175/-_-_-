#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int dis=(x*x)+(y*y);
    if(dis<=40000) printf("inside\n");
    else printf("outside\n");
}