#include <iostream>
#include <string>

using namespace std;

template <class T>
string sign(T& a)
{
    string f;
    if (a > 0)
    {
        f = "+";
    }
    if (a == 0)
    {
        f = "����������";
    }
    if (a < 0)
    {
        f = "-";
    }
    return f;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "������� ����� ��� ����������� ��� �����." << endl;
    double q;
    cin >> q;
    cout << sign(q) << endl;
}