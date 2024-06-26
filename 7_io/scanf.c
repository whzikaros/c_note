#include <stdio.h>
/*
scanf以空格、Tab或回车作为输入数据的分隔符，遇到以下情况认为一个数据的输入结束：
1）空格、Tab或回车
2）达到输入位宽
3）遇非法字符

使用*可跳过一次输入

注意：输入时需要按照scanf函数的第一个参数原样输入。
scanf()用完后会在缓冲区留下回车。
解决方案：
1.使用getchar()吃掉剩余的回车。
2.在下一个scanf()的第一个参数内先留个空格。
*/
int main()
{
    int a, b, c;
    scanf("%d, %*d, %d", &a, &b); //跳过输入的第二个数

    //处理多余的回车，方案1
    getchar();
    scanf("%d", &c);

    //处理多余的回车，方案2
    // scanf(" %d", &c);

    printf("%d %d", a, b);



}