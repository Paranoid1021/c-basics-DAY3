#include<stdio.h>
int main() {

    int n = 4;
    for (int i = 1; i <= n; i++){
        for (int k = n - i; k > 0; k--)
            printf(" ");
        for (int k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--){
        for (int k = n - i; k > 0; k--)
            printf(" ");
        for (int k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}