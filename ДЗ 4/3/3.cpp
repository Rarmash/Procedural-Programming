#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float krug(double r) {
    return M_PI * pow(r, 2);
}

float prya(double a, double b) {
    return a * b;
}

float treu(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    setlocale(0, "");
    system("cls||clear");
    int n;
    cout << "Выберите фигуру (введите число)" << endl << "1. Круг" << endl << "2. Прямоугольник" << endl << "3. Треугольник" << endl;
    cin >> n;
    if (n == 1) {
        cout << "Введите радиус круга: ";
        double r;
        cin >> r;
        cout << "Ответ: " << krug(r);
    }
    else if (n == 2) {
        cout << "Введите стороны A и B: ";
        double a, b;
        cin >> a >> b;
        cout << "Ответ: " << prya(a, b);
    }
    else if (n == 3) {
        int k = 0;
        while (k == 0) {
            cout << "Введите три стороны треугольника: ";
            double a, b, c;
            cin >> a >> b >> c;
            if (a + b < c || b + c < a || c + a < b) {
                cout << "Треугольник с такими сторонами не существует" << endl;
            }
            else {
                cout << "Ответ: " << treu(a, b, c);
                k = 1;
            }
        }
    }
}