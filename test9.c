#include<stdio.h>
void find_target() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i * j > 50) {
                printf("跳出了所有循环\n");
                return; // 直接结束整个函数，一层不剩
            }
        }
    }
}
int main() {
    // 方法一：标志变量（Flag）
    int found = 0; // 0 表示没找到，1 表示找到了
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i * j > 50) {
                found = 1;
                break; // 先跳出内层
            }
        }
        if (found) {
            break; // 检查标志，再跳出外层
        }
    }
    printf("跳出了所有循环\n");

    //方法二：goto 语句
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i * j > 50) {
                goto end; // 直接跳到标签处，两层全退
            }
        }
    }
    end: // 标签在整个函数中是唯一的，多个 goto 函数可以跳转到同一个标签，也可以根据需求设置不同的标签
        printf("跳出了所有循环\n");
    // 方法三：封装成函数
    find_target();
    return 0;
}