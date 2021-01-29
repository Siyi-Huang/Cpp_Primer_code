/*
 * 练习1.21:
 * 编写程序，读取两个ISBN相同的Sales_item对象，输出他们的和。
 * 输入：
 * 0-201-78345-X 3 20.00
 * 0-201-78345-X 2 25.00
 * 输出：
 * 0-201-78345-X 5 110 22
 */

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item book1, book2;
    std::cout << "请输入两条ISBN相同的销售记录：" << std::endl;
    std::cin >> book1 >> book2;              // 读取一对交易记录
    if (compareIsbn(book1, book2)) {
        std::cout << "汇总信息：ISBN、售出本数、销售额和平均售价为 ";
    std::cout << book1 + book2 << std::endl; // 打印它们的和
    return 0;
}