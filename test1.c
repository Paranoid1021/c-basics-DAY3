#include <stdio.h>

int main() {
    int a = 5;
    int b = a++; // 后缀：先用 a 的当前值赋值给 b，然后 a 自增
    printf("a = %d, b = %d\n", a, b);
    
    int c = 5;
    int d = ++c; // 前缀：先 c 自增，然后把新值赋给 d
    printf("c = %d, d = %d\n", c, d);
    
    // 在复杂表达式中的区别
    int i = 1;
    int j = i++ + ++i; // 未定义行为（不同编译器结果不同），不要这样写！
    //在 C 语言中，i++ 和 ++i 都修改了变量 i。而在同一个表达式 i++ + ++i 中，i 被修改了两次。C 标准规定，在两个序列点（sequence point）之间，不允许对同一个变量进行多次修改。这里的 + 运算符两边的求值顺序是未定义的，编译器可以决定先算左边还是先算右边，甚至可能穿插计算。
    printf("i = %d, j = %d\n", i, j);
    return 0;
}