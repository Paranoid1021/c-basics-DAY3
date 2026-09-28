#include <stdio.h>

int main() {
    // while：先判断后执行
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    // for：紧凑，适合计数
    // 变量 j 只在这个 for 循环内部存活，出了循环就销毁，极其节省内存且避免命名冲突
    for (int j = 1; j <= 5; j++) {
        printf("%d ", j);
    }
    printf("\n");
    
    // do-while：先执行后判断，至少执行一次
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n");


    // 对比 while 与 do-while 的区别
    i = 10;
    k = 10;
    while (i <= 5) {
        printf("while: %d\n", i);
        i++;
    }   
    do {
        printf("do-while: %d\n", k);
        k++;
    } while (k <= 5);

    
    return 0;
}