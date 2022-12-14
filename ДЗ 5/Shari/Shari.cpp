#include <iostream>

using namespace std;

bool printing(int* shar, int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (shar[i] == (i + 1)) return true;
    }
    return false;
}

void swap(int* a, int i, int j)
{
    int s = a[i];
    a[i] = a[j];
    a[j] = s;
}

bool switching(int* a, int n)
{
    int j = n - 2;
    while (j != -1 && a[j] >= a[j + 1])
        j--;
    if (j == -1)
        return false;
    int k = n - 1;
    while (a[j] >= a[k]) k--;
    swap(a, j, k);
    int l = j + 1, r = n - 1;
    while (l < r)
        swap(a, l++, r--);
    return true;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int ans = 1, n;
    cout << "Введите количество шариков: ";
    cin >> n;
    int* shar = new int[n];
    for (int i = 1; i < (n + 1); i++) {
        shar[i - 1] = i;
    }
    while (switching(shar, n)) {
        if (printing(shar, n))
            ans++;
    }
    cout << "Ответ: " << ans << endl;
    return 0;
}