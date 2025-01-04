/*

1
23
456
78910



*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;

    int row = 1;
    int count = 1;
    while (row <= number)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}