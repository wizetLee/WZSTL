#include <iostream>

//取消自定义的宏，以确保不会与标准库函数模板 std::max/std::min 发生冲突
#ifdef max
#pragma message("#undefing marco max")
#undef max
#endif // max

#ifdef min
#pragma message("#undefing marco min")
#undef min
#endif // min

template <class T> struct list_node;
int main() {

  // 处理当前的情况

  return 0;
}
