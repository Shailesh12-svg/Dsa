/*

A
BC
DEF
GHIJ


*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = 1;
    char Value = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << Value;
            Value++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}