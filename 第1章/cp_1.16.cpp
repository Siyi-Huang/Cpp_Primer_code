/*
 * 练习1.16:
 * 编写程序，从cin读取一组数，输出其和
*/

#include <iostream>

int main(){
    int sum = 0, val = 0;
    std::cout << "Enter numbers, ctrl+D to end" << std::endl;
    while (std::cin >> val){
        sum += val;
    }
//    for (; std::cin >> val;)
//        sum +=val;
// 显然，对于循环次数无法预知的情况，for比while稍累赘一些。
    std::cout << "Sum of these numbers is " << sum << std::endl;
    return 0;
}