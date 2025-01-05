// Print from n to 1

#include <iostream>
using namespace std;

void recursive4(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << n << endl;
    recursive4(n - 1);
}

int main()
{
    int n;
    cin >> n;

    recursive4(n);
}