#include <iostream>
using namespace std;

void recursive(int a)
{
    cout << a << endl;

    recursive(a);
}

int main()
{
    // Calling a recursive f(n) here
    int a;
    cout << "Please enter the number you wanted to print : " << endl;
    cin >> a;
    recursive(a);

    return 0;
}