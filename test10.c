#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    // 用 sizeof 自动计算元素个数
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("数组元素和：%d\n", sum);
    return 0;
}