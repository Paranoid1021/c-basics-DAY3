#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float c = 10.5;
    
    printf("整数除法：%d\n", a / b);          // 2
    printf("强制转换：%.2f\n", (float)a / b); // 2.50
    printf("混合运算：%f\n", a / c);          // a提升为float，0.476190
    
    // 优先级：算术 > 关系 > 逻辑
    int result = a + b * 2 > 10 && a < 10; // (5+4>10) && (5<10) = 0 && 1 = 0
    printf("优先级结果：%d\n", result);
    return 0;
}