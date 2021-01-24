/*
 * 练习1.13:
 * 使用for循环重做1.4.1节中的所有练习
 * 此处重做1.4.1节的练习1.11
 * 练习1.9和1.10可由1.11得
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
    for (int i = val1; i <= val2; i++)
    {
        sum += i;
    }
    std::cout << "Sum of " << tmp
              << " to " << val2
              << " inclusive is "
              << sum << std::endl;
    return 0;
}