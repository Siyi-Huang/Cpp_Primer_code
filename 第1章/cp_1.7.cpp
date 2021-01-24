/*
 * 练习1.7
 * 编译一个包含不正确嵌套注释的程序，观察编译器返回的错误信息。
 */

// 以下为不正确嵌套注释程序

/*
 * 注释对/* */不能嵌套
 */

int main(){
    return 0;
}

// 错误信息
// cp_1.7.cpp:9:13: warning: '/*' within block comment [-Wcomment]
// 注释对/* */不能嵌套
//         ^
// cp_1.7.cpp:9:18: error: unknown type name '不能嵌套'
// * 注释对/* */不能嵌套
//              ^
// cp_1.7.cpp:10:3: error: expected unqualified-id
// */
//  ^
//1 warning and 2 errors generated.