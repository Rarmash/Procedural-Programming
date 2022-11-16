#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a, b, n, c;
    cin >> a >> b >> c;
    int s1 = c - a;
    int s2 = s1 / b;
    cout << s2;
}