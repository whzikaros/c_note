#include <stdio.h>

/*
条件编译是指预处理器根据条件编译指令，有条件地选择源程序代码中的一部分代码作为输出，送给编译器进行编译，主要是为了有选择性地执行相应操作。
*/

#define RESULT 0
#define RESULT1 1

//#ifndef-#define-#endif，防止重复包含
#ifndef PI
#define PI 3.14159
#endif



int main()
{

//#ifdef-#endif
#ifdef PI
    printf("PI\n");
#endif

    //#if-#else-#endif
    #if !RESULT
    {
        printf("It is false!\n");
    }
    #else
    {
        printf("It is true!\n");
    }
    #endif

    //#if-#elif-#else-#endif
    #if 0==RESULT1
    {
        printf("It is false!\n");
    } 
    #elif 1==RESULT1
    {
        printf("It is 1!\n");
    }
    #else
    {
        printf("It is true!\n");
    }
    #endif    

    return 0;
}