#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Please enter your name: " << endl;
    cin >> name; // Use getline to read the full name

    if (name != "Shailesh")
    {
        cout << "Hey, your name is not Shailesh." << endl;
    }
    else
    {
        cout << "Welcome, Shailesh!" << endl;
    }
    return 0;
}
