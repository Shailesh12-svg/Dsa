// Print from 1 to N  by Bracktacking
// Means f(i+1,N) is not allowed here ..

#include <iostream>
using namespace std;

void backtracking(int i, int n)
{

    // Base  condition
    if (i < 1)
    {
        return;
    }
    // Recursive call
    backtracking(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;

    backtracking(n, n);

    return 0;
}