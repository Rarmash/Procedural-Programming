#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    if (m > 0) {
        if (m < 3 || m == 5) {
            cout << "0\n0";
        }
        else if (m % 3 == 0) {
            cout << m / 3 << endl << 0;
        }
        else {
            cout << m % 4 << endl << (m - 3 * (m % 4)) / 4;
        }
    }
    else {
        cout << "Error.";
    }
}