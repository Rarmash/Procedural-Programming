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
        int s1 = c - a;
        int s2 = s1 / b;
        cout << "Максимальное число лопастей спиннера - " << s2 << ".";
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
    int m1 = m;
    while (m >= 0) {
        if (m % 3 == 0)
        {
            a = a + (m / 3);
            break;
        }
        if (m % 4 == 0)
        {
            b = b + (m / 4);
            break;
        }
        if (m % 3 == 1 || m % 3 == 2)
        {
            m = m - 4; b++;
        }
    }
    if ((3 * a + 4 * b) != m1)
    {
        cout << "0 спиннеров с 3 лопастями\n0 спиннеров с 4 лопастями\nНевозможно произвести спиннеры так, чтобы суммарное число лопастей было равно " << m1;
    }
    else
    {
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

void task4()
{
    /*
    const unsigned int PLACES_COUNT = 54;

    vector<unsigned int> statuses; // Сколько свободно мест (от 0 до 6, 6 - купе свободно)
    map<unsigned int, unsigned int> links; // Словарь Место - Номер купе.


    void init() {
        for (unsigned int i = 0; i < PLACES_COUNT / 6; i++) {
            //std::cout << "Generating for " << i << std::endl;
            statuses.push_back(0);
            for (unsigned int j : {4 * i + 1, 4 * i + 2, 4 * i + 3, 4 * i + 4, PLACES_COUNT - i * 2 - 1, PLACES_COUNT - i * 2}) {
                //std::cout << " * Added : " << j << std::endl;
                links[j] = i;
            }
        }


    }


    int main() {
        init();
        unsigned int buffer, n;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            //std::cout << ">>";
            std::cin >> buffer;
            if (links.find(buffer) != links.end()) { // Проверка валидности ключа
                statuses[links[buffer]] += 1;
                links.erase(buffer);
            }
        }

        unsigned int result = 0;
        unsigned int now = 0;
        for (unsigned int i : statuses) {
            if (i == 6) {
                now += 1;
                if (now > result)
                    result = now;
            }
            else {
                now = 0;
            }
        }
        cout << result << std::endl;
    }
    */
    cout << "4.";
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