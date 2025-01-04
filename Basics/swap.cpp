#include <iostream>
using namespace std;

int main()
{

    int a, b, swap;

    cout << "Please enter two numbers" << endl;
    cin >> a >> b;

    cout << "The value in a is :" << a << endl;
    cout << "The value in b is :" << b << endl;

    cout << "Swapping two numbers" << endl;

    swap = a;
    a = b;
    b = swap;

    cout << "The value in a after swappingis :" << a << endl;
    cout << "The value in b after swapping is :" << b << endl;
}