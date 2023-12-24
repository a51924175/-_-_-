#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i>31){
        printf("Value of more than 31\n");
        return 0;
    }
    int result=1<<i;
    printf("%d\n",result);
}