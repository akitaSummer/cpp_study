#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double value = 1.0;
    double &refValue = value;
    double *pValue = &value;

    // 读取
    cout << "value: " << value << endl;
    cout << "refValue: " << refValue << endl;
    cout << "pValue: " << pValue << ", *pValue: " << *pValue << endl;

    // 修改
    *pValue = 2.0;
    cout << "value: " << value << endl;
    cout << "refValue: " << refValue << endl;
    cout << "pValue: " << pValue << ", *pValue: " << *pValue << endl;

    refValue = 3.0;
    cout << "value: " << value << endl;
    cout << "refValue: " << refValue << endl;
    cout << "pValue: " << pValue << ", *pValue: " << *pValue << endl;

    double otherValue = 1.0;
    refValue = otherValue; // 不会指向引用，而是修改value为1.0
    cout << "otherValue: " << otherValue << ", address: " << &otherValue << endl;
    cout << "value: " << value << endl;
    cout << "refValue: " << refValue << endl;
    cout << "pValue: " << pValue << ", *pValue: " << *pValue << endl;

    pValue = &otherValue;
    cout << "otherValue: " << otherValue << ", address: " << &otherValue << endl;
    cout << "value: " << value << endl;
    cout << "refValue: " << refValue << endl;
    cout << "pValue: " << pValue << ", *pValue: " << *pValue << endl;

    return 0;
}