/*

        111
        222
        333


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
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}