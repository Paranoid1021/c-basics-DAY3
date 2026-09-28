#include <stdio.h>

int main() {
    int score;
    printf("请输入成绩（0-100）：");
        while ((scanf("%d", &score) != 1) || score < 0 || score > 100) {
            printf("输入无效，请重新输入：");
            while (getchar() != '\n'); // 清空缓冲区
        }
    if (score >= 90) {
        printf("等级：A\n");
    } else if (score >= 80) {
        printf("等级：B\n");
    } else if (score >= 70) {
        printf("等级：C\n");
    } else if (score >= 60) {
        printf("等级：D\n");
    } else {
        printf("等级：F\n");
    }
    return 0;
}