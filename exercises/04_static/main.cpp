#include "../exercise.h"

// READ: `static` 关键字 <https://zh.cppreference.com/w/cpp/language/storage_duration>
// THINK: 这个函数的两个 `static` 各自的作用是什么？
static int func(int param) {
    static int static_ = param;
    // std::cout << "static_ = " << static_ << std::endl;
    return static_++;
}
// static 可以修饰局部变量，成为静态局部变量，生命周期贯穿整个程序运行期间，只会被初始化一次
// 修饰成员变量或成员函数，成为镜头成员，可以由类名直接调用，镜头成员变量初始化必须在类外
// 修饰全局变量或函数，成为静态全局变量或镜头函数，作用域只限于当前文件，不能被其它文件访问。
int main(int argc, char **argv) {
    // TODO: 将下列 `?` 替换为正确的数字
    ASSERT(func(5) == 5, "static variable value incorrect");
    ASSERT(func(4) == 6, "static variable value incorrect");
    ASSERT(func(3) == 7, "static variable value incorrect");
    ASSERT(func(2) == 8, "static variable value incorrect");
    ASSERT(func(1) == 9, "static variable value incorrect");
    return 0;
}
