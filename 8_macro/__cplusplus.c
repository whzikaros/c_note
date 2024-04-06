#include <stdio.h>

/*
宏定义__cpluscplus
用于区分和兼容C、C++，C++默认定义了该宏，C语言没有

extern “C” 主要作用就是为了能够正确实现 C++ 代码调用其他 C 语言代码。
extern “C” 会指示编译器这部分代码按 C 语言的进行编译，而不是 C++。
extern “C” 使用场景：
1、C++代码调用 C 语言代码；
2、在 C++的头文件中使用；
3、在多个人协同开发时，可能有的人比较擅长 C 语言，而有的人擅长 C++，这样的情况下也会有用到；
4、重点提示：如果是 C++ 调用由 C 语言编写的第三方库，必须使用 extern “C” 告诉编译以 C 方式编译，否则会出现编译报错的问题；

*/


#ifndef __CODERSRC_H__          /*防止该头文件被重复引用*/
#define __CODERSRC_H__

#ifdef __cplusplus             //告诉编译器，这部分代码按C语言的格式进行编译，而不是C++的
extern "C"{
#endif

/*.................................
 * do something here
 *.................................
 */

#ifdef __cplusplus
}
#endif

#endif /*end of __CODERSRC_H__*/


int main()
{


    return 0;
}