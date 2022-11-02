#include <iostream>
using namespace std;

void gen(int m, int b, int c, int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s = (m * s + b) % c;
        cout << s << " ";
    }
}

int main()
{
    setlocale(0, "");
    cout << "Введите числа m, b, c: ";
    int m, b, c, n;
    cin >> m >> b >> c;
    cout << "Введите кол-во чисел, необходимое для генерации: ";
    cin >> n;
    gen(m, b, c, n);
}