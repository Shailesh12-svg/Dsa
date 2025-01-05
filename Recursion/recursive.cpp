#include <iostream>
using namespace std;
int start = 0; // Global Variable
void recursive(int count1)
{

    // Base conditon

    if (start == count1)
    {
        return;
    }
    cout << start << endl;
    start++;
    recursive(count1);
}

int main()
{
    cout << "Please enter the maximum counter value :" << endl;
    int count1;
    cin >> count1;

    recursive(count1);

    return 0;
}