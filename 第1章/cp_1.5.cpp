/*
 * 练习1.5:
 * 重写程序，将每个运算对象的打印操作放在一条独立的语句中
 */

#include <iostream>

int main(){
    std::cout << "Enter two numbers" << std::endl;
    int val1 = 0, val2 = 0;
    std::cin >> val1 >> val2;
    std::cout << "The product of " << val1;
    std::cout << " and " << val2;
    std::cout << " is " << val1 * val2 << std::endl;
    return 0;
}