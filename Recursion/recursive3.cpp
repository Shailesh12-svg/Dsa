// Print linearly from 1 to N
#include <iostream>
using namespace std;

void recursive3(int i, int num)
{
    if (i > num)
    {
        return;
    }
    cout << i << endl;
    recursive3(i + 1, num);
}

int main()
{
    int num;
    cout << "Please enter n" << endl;
    cin >> num;

    recursive3(1, num);
}