#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
    const char *stringName_0 = "hello world";
    char stringName_1[] = "hello world1";
    char stringName_2[] = "hello world2";
    cout << "len: " << strlen(stringName_0) << endl;

    // 比较大小
    cout << "strcmp: " << strcmp(stringName_0, stringName_1) << endl;

    // 连接 stringName_1 = stringName_1 + stringName_2
    cout << "strcat: " << strcat(stringName_1, stringName_2) << endl;
    cout << "stringName_1: " << stringName_1 << endl;

    // 复制 stringName_1 = stringName_2
    cout << "strcpy: " << strcpy(stringName_1, stringName_2) << endl;
    cout << "stringName_1: " << stringName_1 << endl;

    // 查找 返回指针
    cout << "strchr: " << strchr(stringName_1, 'l') << endl;  // 第一个
    cout << "strchr: " << strrchr(stringName_1, 'l') << endl; // 最后一个

    return 0;
}