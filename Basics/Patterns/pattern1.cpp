/*

        ****
        ****
        ****
        ****



*/

#include <iostream>
using namespace std;
int main()
{
    int number;

    cout << "Please enter number of stars : " << endl;
    cin >> number;

    int i = 1; // intial state

    while (i <= number)
    {
        // Column
        int j = 1;

        while (j <= number)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}