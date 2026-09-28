#include <stdio.h>

int main() {
    char op;
    double a, b;
    
    printf("请输入表达式（如 3 + 5）：");
    scanf("%lf %c %lf", &a, &op, &b);
    
    switch (op) {
        case '+':
            printf("%.2f\n", a + b);
            break;
        case '-':
            printf("%.2f\n", a - b);
            break;
        case '*':
            printf("%.2f\n", a * b);
            break;
        case '/':
            if (b != 0) printf("%.2f\n", a / b);
            else printf("除数不能为0\n");
            break;
        default:
            printf("无效运算符\n");
    }
    return 0;
}