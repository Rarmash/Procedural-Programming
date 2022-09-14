#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    double S, m, n, p, r;
    cout << "Введите величину ссуды: ";
    cin >> S;
    cout << "Введите месячную выплату: ";
    cin >> m;
    cout << "Введите количество лет: ";
    cin >> n;
    for (p = 1; p <= 100; p++) {
        r = p / 100;
        double mm = (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
        if (mm > m) {
            cout << "Процент равен " << p << ".";
            exit(0);
        }
    }
}