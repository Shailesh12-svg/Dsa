#include <iostream>
#include <string>
using namespace std;

int cnt = 0;
void recursive1(string name, int num)
{
    if (cnt == num)
    {
        return;
    }
    cout << name << endl;
    cnt++;
    // Recursive call
    recursive1(name, num);
}

int main()
{
    string name;
    cout << "Please enter your name " << endl;
    cin >> name;
    int num;
    cout << "Please enter the number of times you wanted to print it .." << endl;
    cin >> num;
    recursive1(name, num);
}