#include <stdio.h>
/*预处理指令(prepreocessor directive) #include 和头文件stdio.h 相当于把stdio.h文件中的所有内容都输入该行所在的位置 "Cope-Pate" */     

/* 一个简单的C程序 */
int main(void) // main() 总是第1个被调用的函数
{
    int num;
    num = 1;
    printf("I am a simple ");
    printf("computer.\n");
    printf("My favorite number is %d beacause it is first.\n", num);
    return 0;
}