﻿#include <iostream>
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
    int m_orig = m; //дублируем переменную
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

void task4()
{
    const int mesta = 54; //общее количество мест. Константа.
    vector<unsigned int> statuses; // Сколько свободно мест на купе
    map<unsigned int, unsigned int> nomera; // Место - Номер купе.
    unsigned int nomer, n, resultat = 0, kupe = 0;
    for (unsigned int i = 0; i < mesta / 6; i++) {
        statuses.push_back(0);
        for (unsigned int j: {4 * i + 1, 4 * i + 2, 4 * i + 3, 4 * i + 4, mesta - i * 2 - 1, mesta - i * 2}) {
            nomera[j] = i; //наполнение массива номеров мест купе
        }
    }
    cout << "Введите количество свободных мест в вагоне: "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Введите номер свободного места: "; cin >> nomer;
        if (nomera.find(nomer) != nomera.end()) { // Проверка валидности номера
            statuses[nomera[nomer]] += 1; //+ к свободному месту в опр. купе
            nomera.erase(nomer); //убираем из общей базы номеров данное число
        }
    }
    for (unsigned int i : statuses) { //начинаем поиск подряд идущих свободных купе
        if (i == 6) {
            kupe += 1;
            if (kupe > resultat)
                resultat = kupe;
        }
        else {
            kupe = 0; //в случае, если данное купе не свободно полностью, обнуляем счётчик
        }
    }
    cout << "Максимальное количество идущих подряд свободных купе - " << resultat << endl;
    system("pause");
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