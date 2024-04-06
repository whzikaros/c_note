#include <stdio.h>
#include <getopt.h>
#include <iostream>
using namespace std;

/*
getopt_long()函数支持长选项的命令行参数。类似python的argparse库。
参数1和参数2获取的命令行参数
参数3是一个字符串，表示可以接收的参数，例如，“a:b:cd”，表示可以接受的参数是a,b,c,d，其中，a和b参数后面跟有更多的参数值。(例如：-a host -b name)
其中的一个:表示该选项必须再跟一个参数，该参数的指针赋给optarg。两个:表示该选项后面可以跟参数，也可以不跟参数，跟参数的话参数与选项不能用空格隔开。

全局变量有：
optarg——指向当前选项参数（如果有）的指针。比如-a host，那么optarg就为host。没有参数则为NULL
optind——再次调用 getopt()或者getopt_long() 时的下一个 argv 指针的索引。
optopt——最后一个未知选项。

option结构体：
元素1表示长参数的名字,
元素2可以是0,1,2，0表示该参数后面不跟参数值，1表示该参数后面一定要跟个参数值，2表示该参数后面可以跟，也可以不跟参数值
元素3表示getopt_long的返回值，如果为NULL则返回option的元素4
元素4表示当元素3为NULL时的返回值。

函数完成后返回-1

比如在main.cpp所在目录下运行脚本：
g++ main.cpp -o main
./main -n -l love name

*/

char *l_opt_arg;
char* const short_options = "nbl:";
struct option long_options[] = {
    { "name", 0, NULL, 'n' }, 
    { "bf_name", 0, NULL, 'b' },
    { "love", 1, NULL, 'l' },
    { 0, 0, 0, 0},
};

int main(int argc, char *argv[])
{
    int c;
    while((c = getopt_long(argc, argv, short_options, long_options, NULL)) != -1)
    {
        switch (c)
        {
            case 'n':
                printf("My name is XL.\n");
                break;
            case 'b':
                printf("His name is ST.\n");
                break;
            case 'l':
                l_opt_arg = optarg; //optarg表示获取的参数
                printf("Our love is %s!\n", l_opt_arg);
                break;
        }
    }
    cout << "success" << endl;
    return 0;
}
