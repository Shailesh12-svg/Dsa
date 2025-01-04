#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your max value" << endl;
    cin >> n;

    int i = 2; // Intial value

    int sum = 0;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of even numbers :" << sum << endl;
    return 0;
}