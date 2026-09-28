#include <stdio.h>

int main(void) {
    int arr[3] = {10, 20, 30};
    int *p = arr; // 让 p 指向数组的首地址

    // 下面这四种写法，输出的全是 20
    printf("arr[1]      = %d\n", arr[1]);
    printf("*(p + 1)    = %d\n", *(p + 1));
    printf("p[1]        = %d\n", p[1]);
    printf("*(1 + p)    = %d\n", *(1 + p));

    // 指针的移动
    printf("\n看看地址（十六进制）：\n");
    printf("p     的地址: %p\n", (void*)p); // %p 用于打印指针地址
    printf("p + 1 的地址: %p\n", (void*)(p + 1));
    printf("p + 2 的地址: %p\n", (void*)(p + 2));
    
    // 你会发现 p+1 的地址比 p 的地址正好大 4 个字节（因为 int 是 4 字节）

    return 0;
}