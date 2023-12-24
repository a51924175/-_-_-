#include<stdio.h>
int main(){
    int starth,startm,endh,endm;
    scanf("%d %d",&starth,&startm);
    scanf("%d %d",&endh,&endm);
    if(endm<startm){
        endh-=1;
        endm+=60;
    }
    int resth=endh-starth,restm=endm-startm;
    int times=(resth*2)+(restm/30);
    if(times<=4){
        printf("%d\n",times*30);
    }
    else if(times>4 && times<=8){
        printf("%d\n",(120+(times-4)*40));
    }
    else{
        printf("%d\n",(280+(times-8)*60));
    }
}