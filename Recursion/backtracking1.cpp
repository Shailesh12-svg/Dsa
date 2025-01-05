// Print from N to 1 using backtracking approch
// Here f(i-1 to n) is not allowed

#include <iostream>
using namespace std;

void backtracking1(int i, int num)
{
    if (i > num)
    {
        return;
    }
    backtracking1(i + 1, num);
    cout << i;
}

int main()
{
    int num;
    cin >> num;

    backtracking1(1, num);
}