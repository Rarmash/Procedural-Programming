#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    if (k < 3 || k == 5) {
        cout << "0\n0";
    }
    else if (k % 3 == 0) {
        cout << k / 3 << endl << 0;
    }
    else {
        cout << k % 4 << endl << (k - 3 * (k % 4)) / 4;
    }
}