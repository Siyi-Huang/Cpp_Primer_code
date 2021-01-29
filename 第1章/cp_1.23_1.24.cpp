/*
 * 练习1.23 & 1.24:
 * 编写程序，读取多条销售记录，并统计每个ISBN（每本书）有几条销售记录。
 * 输入表示多个ISBN的多条销售记录来测试上一个程序，每个ISBN的记录应该聚在一起。
 */

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item book1, book2;
    std::cin >> book1;                       // 读入第一本书
    while (std::cin >> book2){               // 依次读入下一本书
        if (book1.isbn() == book2.isbn())
            book1 += book2;                  // 更新销售记录
        else {
            std::cout << book1 << std::endl; // 打印上一本书
            book1 = book2;                   // 现在表示下一本书
        }
    }
    std::cout << book1 << std::endl;         // 打印最后一本书
    return 0;  
}