/*

1
23
345
4567


*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = 1;
    /// Trick here
    while (row <= n)
    {
        int value = row;
        int col = 1;
        while (col <= row)
        {
            cout << value;
            value++;
            col++;
        }
        cout << endl;
        row++;
    }
}