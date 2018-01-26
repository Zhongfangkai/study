#include <iostream>
using namespace std;

// 函数声明
int func();

// 变量声明
extern int a, b;
extern int c;
extern float f;

int main ()
{
    // 变量定义
    int a, b;
    int c;
    float f;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;
    cout << c << endl ;
    f = 70.0/3.0;
    cout << f << endl ;
    cout << func() << endl;
    return 0;
}
// 函数定义
int func()
{
    return 0;
}