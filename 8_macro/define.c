#include <stdio.h>

/*
宏定义在预处理阶段做简单的字符串替换。
宏定义有两种格式(带参数和不带参数)：
1.#define <宏名> <字符串>
2.#define <宏名>(<参数表>) <字符串>
*/

// 格式1
#define PI 3.14159

// 格式2
#define S(a, b) ((a) * (b))
// 加括号是为了解决字符串被替换后操作符优先级的问题。

#define N 2 + 2
#define FUN(a) "a"
#define MAX // 没有值的宏定义用于当作开关标识(条件编译)

int main()
{
    int a = 3, b = 5;
    int sum = S(a, b);
    printf("%d\n", sum);

    int c = N * N;     // N*N被替换成2+2*2+2
    printf("%d\n", c); // 结果为8

    printf("%s\n", FUN(345)); // 结果仍然是a，字符串内的内容不会被替换

#ifdef MAX
    printf("666666\n");
#endif
}