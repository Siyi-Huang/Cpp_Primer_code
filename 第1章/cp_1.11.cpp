/*
 * 练习1.11
 * 编写程序，提示用户输入两个整数，打印出这两个整数所指定范围内的所有整数。
 */

#include <iostream>

int main(){
    int sum = 0, val1 = 0, val2 = 0;
    int tmp = 0;
    std::cout << "Enter two numbers" << std::endl;
    std::cin >> val1 >> val2;
    if (val1 > val2){ // 保持val1 < val2
        val1 = tmp;
        val1 = val2;
        val2 = val1;
    }
    tmp = val1;
    while (val1 <= val2){
        sum += val1;
        ++val1;
    }
    std::cout << "Sum of " << tmp
              << " to " << val2
              << " inclusive is "
              << sum << std::endl;
    return 0;
}