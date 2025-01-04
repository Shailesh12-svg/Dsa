#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Please enter any number" << endl;
    cin >> n;

    // intial value

    int i = 1;
    int sum = 1;

    while (i <= n)
    {
        sum = i + sum;
        i++;
    }
    cout << "Sum : " << sum << endl;
    return 0;
}