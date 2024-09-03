#include "stringtest.h"
#include <string>
using namespace std;

StringTest::StringTest(){
    cout << "StringTest create: " << endl;
}
StringTest::~StringTest(){
    cout << "~StringTest delete " << endl;
}

/**
 * string的几种构造方法
 */
void StringTest::createStringTest(){
    // 直接使用字符串常量初始化
        string s1 = "Hello World!";

        // 字符数组构造函数
        string s2("Tom and Jerry");

        // 拷贝构造函数
        string s3 = s2;

        // 使用 3 个 a 字符 组成的字符串
        string s4(3, 'a');

        // 拼接构造函数
        string s5 = s1 + s2;

        cout << "s1 : " << s1 << endl;
        cout << "s2 : " << s2 << endl;
        cout << "s3 : " << s3 << endl;
        cout << "s4 : " << s4 << endl;//aaa
        cout << "s5 : " << s5 << endl;
}
