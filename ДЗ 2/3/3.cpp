#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    float x, y, b;
    cout << "Введите X: ";
    cin >> x;
    cout << "Введите Y: ";
    cin >> y;
    cout << "Введите B: ";
    cin >> b;
    float z = log(b - y) * sqrt(b - x);
    cout << z;
}