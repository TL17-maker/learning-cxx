#include "../exercise.h"

constexpr unsigned long long fibonacci(int i) {
    switch (i) {
        case 0:
            return 0;
        case 1:
            return 1;
        default:
            return fibonacci(i - 1) + fibonacci(i - 2);
    }
}
// constexpr拥有声明常量表达式或编译时计算的值，在编译时计算并确定某些值或表达式的值。
// 编译时常量： constexpr可以用于声明编译时常量，这些常量在编译时就已经确定，而不是运行时计算
// 编译时函数：这些函数在编译时被调用并计算结果，参数和返回值必须是字面值类型，函数不能有副作用、不能使用动态内存分配等
// 编译时对象：构造函数和成员函数必须满足constexpr的要求，编译时对象可以在编译时初始化并用于常量表达式
int main(int argc, char **argv) {
    constexpr auto FIB20 = fibonacci(20);
    ASSERT(FIB20 == 6765, "fibonacci(20) should be 6765");
    std::cout << "fibonacci(20) = " << FIB20 << std::endl;

    // TODO: 观察错误信息，修改一处，使代码编译运行
    // PS: 编译运行，但是不一定能算出结果……
    constexpr auto ANS_N = 10;
    constexpr auto ANS = fibonacci(ANS_N);
    std::cout << "fibonacci(" << ANS_N << ") = " << ANS << std::endl;

    return 0;
}
// const表示运行时常量，其值在运行时确定，可以在编译时或运行时初始化
// constexpr必须在编译时确定