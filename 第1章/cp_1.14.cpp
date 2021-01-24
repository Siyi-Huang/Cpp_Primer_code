/*
 * 练习1.14:
 * 编写程序，从cin读取一组数，输出其和
*/

#include <iostream>

int main(){
    int sum = 0, val = 0;
    std::cout << "Enter numbers, ctrl+D to end" << std::endl;
    while (std::cin >> val){
        sum += val;
    }
    std::cout << "Sum of these numbers is " << sum << std::endl;
    return 0;
}