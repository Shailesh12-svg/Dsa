#include <iostream>
using namespace std;

int main()
{
    float Fer;
    float cel;

    cout << "Please enter the temp in F : " << endl;
    cin >> Fer;

    cel = (5.0 / 9) * (Fer - 32);

    cout << "The temperature in celsius is : " << cel << endl;

    return 0;
}