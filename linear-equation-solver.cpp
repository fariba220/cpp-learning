#include <iostream>

using namespace std;

int main()
{
     float a, b, x;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    if (a == 0)

        x = -b / a;  cout << "The equation has no solution.";
     else
        cout << "x = " << -b / a;
    return 0;
}
