#include <stdio.h>

int main() {
    int a = 5, b = 0;
    
    // 短路求值：a > 10 为假，b == 0 不会被计算
    if (a > 10 && b == 0) {
        printf("条件为真\n");
    } else {
        printf("条件为假\n");
    }
    
    // 安全判断：避免空指针解引用
    int *p = NULL;
    if (p != NULL && *p > 0) { // p != NULL 为假，*p 不会被计算
        printf("指针有效\n");
    } else {
        printf("指针为空，安全跳过\n");
    }
    return 0;
}