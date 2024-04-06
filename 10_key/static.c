#include <stdio.h>

/*
静态变量：声明或定义变量时在变量前加static关键字。

static变量放在全局区中：
已初始化的static存放在数据段中。
未初始化的static存放在bss段中。

特点：
1.在编译阶段就分配内存。
2.随着程序结束才释放内存。
3.静态全局变量和静态局部变量只有作用域的区别。

*/

int fun(int n){
    //a的值在编译阶段就确定，因此多次调用该函数，该句也不会生效。
    //因为编译器保证静态局部变量只能初始化一次。
    static int a = 1; 
    a = a + n;
    return a; //函数结束后，a仍然保留。
};

int main()
{
    int x = 1;
    printf("%d\n", fun(x)); //2
    printf("%d\n", fun(x)); //3   
}
