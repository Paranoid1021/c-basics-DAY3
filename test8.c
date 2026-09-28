#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 8) break;        // 遇到8直接结束整个循环
        if (i % 2 == 0) continue; // 偶数跳过本次循环，进入下一次
        printf("%d ", i);         // 输出 1 3 5 7
    }
    printf("\n");

    // break 只跳内层
    for (int i = 1; i <= 3; i++) {
        printf("外层 i = %d 开始 -> ", i);
        
        for (int j = 1; j <= 5; j++) {
            if (j == 3) {
                break; // 只跳出当前的 j 循环，i 循环不受影响
            }
            printf("(i=%d, j=%d) ", i, j);
        }
        
        printf("| 内层 j 循环结束，外层 i = %d 继续\n", i);
    }

    // continue 只跳内层本次
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (j == 2) {
                continue; // 只跳过内层 j == 2 的这一次
            }
            printf("(i=%d, j=%d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}