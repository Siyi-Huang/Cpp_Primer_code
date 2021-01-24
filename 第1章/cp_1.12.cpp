/*
 * 练习1.12:
 * 下面的for循环完成了什么功能？sum的终值是多少？
 * int sum = 0;
 * for (int i = -100; i <= 100, ++1)
 *      sum += i;
 * 
 * 实现-100到100的整数相加
 * sum终值为0
*/

#include <iostream>

int main(){
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << sum << std::endl;
    return 0;
}