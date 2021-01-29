/*
 * 练习1.20:
 * 第一章的代码目录中包含了Sales_item.h。
 * 将它拷贝到你自己的工作目录中。
 * 用它编写一个程序，读取一组书籍销售记录，将每条记录打印到标准输出上。
 * 输入：0-201-70353-X 4 24.99
 * 输出：0-201-70353-X 4 99.96 24.99
 */

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item book;
    // 读入ISBN号、售出的册数以及销售价格
    while (std::cin >> book) {
        // 写入ISBN、售出的册数、总销售额和平均价格
        std::cout << book << std::endl;
    }
    return 0;
}
