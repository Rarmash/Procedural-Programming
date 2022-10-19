#include <iostream>

using namespace std;

template <class T>
void sign(T& a)
{
    if (a > 0)
    {
        a = 1;
    }
    if (a == 0)
    {
        a = 0;
    }
    if (a < 0)
    {
        a = -1;
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "\t\t 2. Задача \"Знак Числа\" \n ";
    cout << "\nВведите число и вы узнаете его знак. (0 - \"0\", 1 - \"+\", -1 - \"-\")" << endl;
    double q;
    cin >> q;
    sign(q);
    cout << q << endl;
}