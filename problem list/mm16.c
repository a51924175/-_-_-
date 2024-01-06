#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int dis=(x*x)+(y*y);
    if(dis<=10000) printf("inside\n");
    else printf("outside\n");
}
