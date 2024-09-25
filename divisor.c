#include <stdio.h>

int gcd(int a, int b){
    int gcd_value, lowest;

    if (a < b){
        lowest = a;
    }else{
        lowest = b;
    }

    for (int i = lowest; i > 0; i--){
        if (a % i == 0 && b % i == 0){
            gcd_value = i;  
            break;  
        }
    }

    return gcd_value;  
}

int main(void){
    printf("%d\n", gcd(10, 12));
    printf("%d\n", gcd(12, 14));
    return 0;
}
