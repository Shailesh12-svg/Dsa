/*

1
22
333
4444


*/

#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;

    int row = 1;

    while (row <= number)
    {
        int col = 1;

        while (col <= row)
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
}