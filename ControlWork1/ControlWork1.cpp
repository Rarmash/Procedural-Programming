#include <iostream>
#include <map>
#include <vector>
using namespace std;

void task1()
{
    int a, b, n, c;
    cout << "Введите стоимость основания спиннера: "; cin >> a;
    cout << "Введите стоимость одной лопасти: "; cin >> b;
    cout << "Введите максимальную стоимость всего спиннера: "; cin >> c;
    if (a <= c && a > 0 && b > 0 && c > 0) {
        n = c - a / b; //Формула, обратная a+b*n=c
        cout << "Максимальное число лопастей спиннера - " << n << ".";
    }
    else if (a > c) {
        cout << "Ошибка! Стоимость основания спиннера не может быть больше допустимой стоимости всего спиннера!";
    }
    else {
        cout << "Ошибка! Значения должны быть положительными!";
    }
    cout << endl;
    system("pause");
}

void task2()
{
    int m, a = 0, b = 0;
    cout << "Введите количество лопастей, которое есть у Дениса: "; cin >> m;
    int m_orig = m;
    while (m >= 0) {
        if (m % 3 == 0)
        {
            a += (m / 3); //если достаточно лопастей для создания спиннеров по 3 лопасти
            break;
        }
        if (m % 4 == 0)
        {
            b += (m / 4); //то же самое, что и выше, но с 4 лопастями. НО СРЕДИ ОСТАВШИХСЯ С ПРОШЛОЙ ОПЕРАЦИИ
            break;
        }
        if (m % 3 == 2 || m % 3 == 1)
        {
            m -= 4; b++; //попытка изменения количества для получения спиннера с 4 лопастями
        }
    }
    if ((3 * a + 4 * b) != m_orig) {
        cout << "0 спиннеров с 3 лопастями\n0 спиннеров с 4 лопастями\nНевозможно произвести спиннеры так, чтобы суммарное число лопастей было равно " << m_orig;
    }
    else {
        cout << a << " спиннеров с 3 лопастями" << endl << b << " спиннеров с 4 лопастями";
    }
    cout << endl;
    system("pause");
}

void task3()
{
    int n, m, k;
    cout << "Введите размеры исходного листа: "; cin >> n >> m;
    if (n > 0 && m > 0) {
        cout << (n + 1) * (m + 1) * n * m / 4 << " прямоугольников можно вырезать из данного листа бумаги";
    }
    else {
        cout << "Ошибка! Числа должны быть положительными!";
    }
    cout << endl;
    system("pause");
}

void task4() //UNSTABLE
{
    setlocale(0, "");
    cout << "Введите кол-во свободных мест: ";
    int n, pl;
    int k[9]{};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> pl;
        if (((pl >= 1) and (pl <= 4)) or (pl == 53) or (pl == 54)) k[0]++;
        else if (((pl >= 5) and (pl <= 8)) or (pl == 51) or (pl == 52)) k[1]++;
        else if (((pl >= 9) and (pl <= 12)) or (pl == 49) or (pl == 50)) k[2]++;
        else if (((pl >= 13) and (pl <= 16)) or (pl == 47) or (pl == 48)) k[3]++;
        else if (((pl >= 17) and (pl <= 20)) or (pl == 45) or (pl == 46)) k[4]++;
        else if (((pl >= 21) and (pl <= 24)) or (pl == 43) or (pl == 44)) k[5]++;
        else if (((pl >= 25) and (pl <= 28)) or (pl == 41) or (pl == 42)) k[6]++;
        else if (((pl >= 29) and (pl <= 32)) or (pl == 39) or (pl == 40)) k[7]++;
        else if (((pl >= 33) and (pl <= 36)) or (pl == 37) or (pl == 38)) k[8]++;
    }
    int l = 0, max = 0;
    for (int i = 0; i <= 8; i++)
    {
        if ((k[i] == 6) and (k[i + 1] == 6)) l++;
        else
        {
            if (l > max) max = l;
            l = 0;
        }
    }
    cout << max + 1;
}

void task5() {
    cout << "5.";
}

int main() {
    while (true) {
        system("cls||clear");
        setlocale(LC_ALL, "");
        int num;
        cout << "Введите номер задания (1-5 / 9 для выхода): ";
        cin >> num;
        system("cls||clear");
        switch (num) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        case 9:
            exit(0);
        }
    }
}