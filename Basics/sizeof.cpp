#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    char ch = 'a';
    float f = 4.0;
    double d = 200.4;

    cout << sizeof(n) << endl;  // 4
    cout << sizeof(ch) << endl; // 1
    cout << sizeof(f) << endl;  // 4
    cout << sizeof(d) << endl;  // 8

    return 0;
}