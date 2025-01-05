// Parameterised
#include <iostream>
using namespace std;

void recursive2(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Sailesh" << endl;

    recursive2(i + 1, n);
}

int main()
{
    int n;
    cin >> n;

    recursive2(1, n);
    return 0;
}