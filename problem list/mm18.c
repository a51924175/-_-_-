#include <stdio.h>
void Binary(int n){
    for (int i=7;i>=0;i--) {
        int bit=(n>>i)&1;
        printf("%d",bit);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    Binary(num);
    return 0;
}
