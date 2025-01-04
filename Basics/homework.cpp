// Print 'a'-'z'-->lowercase
//       'A' -'Z' -->uppercase
//       '0' -'9' -->Numeric

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Please enter the char character" << endl;
    cin >> ch;

    // Using only if statements

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "UPPERCASE" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Numeric value" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}