/*

    1234
    1234
    1234



*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;

    int i = 1;
    while (i <= number)
    {
        int j = 1;
        while (j <= number)
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i++;
    }
    return 0;
}