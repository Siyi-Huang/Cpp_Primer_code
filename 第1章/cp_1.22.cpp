/*
 * 练习1.22:
 * 编写程序，读取多个具有相同ISBN的销售记录，输出所有记录的和。
 * 输入：
 * 0-201-78345-X 3 20.00
 * 0-201-78345-X 2 25.00
 * 0-201-78345-X 4 21.99
 * 0-201-78345-X 10 24.99
 * 0-201-78345-X 5 25.00
 * 输出：
 * 0-201-78345-X 24 572.86 23.8692
 */

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item total, trans;
    std::cout << "请输入几条ISBN相同的销售记录：" << std::endl;
    if (std::cin >> total) {
        while (std::cin >> trans) {
            if (compareIsbn(total, trans)) // ISBN相同
                total += trans;
            else { // ISBN不同
                std::cout << "ISBN不同" << std::endl;
                return -1;
            }
        }
        std::cout << "汇总信息：ISBN、售出本数、销售额和平均售价为 " 
                  << total << std::endl;
    }
    else {
        std::cout << "没有数据" << std::endl;
        return -1;
    }
    return 0;
}
