/*

123
456
789



*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of stars" << endl;
    cin >> num;

    int i = 1; // row
    int count = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << count << endl;
            count = count + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}