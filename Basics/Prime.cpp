#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please enter the number " << endl;
    cin >> n;

    // Intial starting point
    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number" << endl;
            i++;
        }
        else
        {
            cout << "Prime number" << endl;
            break;
        }
    }
    return 0;
}