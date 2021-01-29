/*
 * 练习1.19:
 * 修改你为1.4.1节练习1.10（第11页）所编写的程序（打印一个范围内的数），
 * 使其能处理用户输入的第一个数比第二个数小的情况
 */

#include <iostream>

int main(){
    std::cout << "Enter 2 numbers" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    if (v1 > v2) {                  // 从大至小打印
        while (v1 >= v2) {
            std::cout << v1 << " ";
            v1--;
        }
    }
    else {                          // 从小至大打印
        while (v1 <= v2) {
            std::cout << v1 << " ";
            v1++;
        }
    }
    std::cout << std::endl;
    return 0;
}