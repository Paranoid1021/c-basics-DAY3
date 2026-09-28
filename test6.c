#include <stdio.h>

int main() {
    // 外层循环控制行数（1到9）
    for (int i = 1; i <= 9; i++) {
        // 内层循环控制每行的列数（1到i）
        for (int j = 1; j <= i; j++) {
            // %-2d 左对齐占2位，保证对齐
            printf("%d*%d=%02d  ", j, i, i * j);
        }
        printf("\n"); // 每行结束后换行
    }
    return 0;
}