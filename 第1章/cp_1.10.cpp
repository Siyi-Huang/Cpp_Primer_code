/*
 * 练习1.10
 * 编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。
 */

#include <iostream>

int main(){
    int sum = 0, val = 10;
    while (val >= 1){
        sum += val;
        --val;
    }
    std::cout << "Sum of 10 to 0 inclusive is "
              << sum << std::endl;
    return 0;
}