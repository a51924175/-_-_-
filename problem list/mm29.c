#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;++i) {
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int input, maxPrime;
    scanf("%d", &input);
    for (maxPrime=input-1;maxPrime>1;--maxPrime) {
        if (isPrime(maxPrime)){
            break;
        }
    }
    printf("%d\n",maxPrime);

    return 0;
}
