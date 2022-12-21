#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS"); 
    int n;
    ifstream File("lorem.txt");
    string TextFile;
    string str;
    while (getline(File, TextFile)) {
        str += TextFile;
    }
    int len = str.length();
    while (true) {
        cout << "Выберите вариант поиска: " << endl;
        cout << "1. Найти максимальное по длине слово" << endl;
        cout << "2. Найти минимальное по длине слово" << endl;
        cin >> n;
        switch(n) {
        case 1:
            string res{ "" }, tmp{ "" };
            for (int i{ 0 }; i < len; ++i) {
                if (str[i] != ' ' ) tmp += str[i];
                if (str[i] == ' ' || i == len - 1) {
                    if (res.length() < tmp.length()) res = tmp;
                    tmp = "";
                }
            }
            cout << res;
            exit(0);
        /*case 2:
            pass;
        default:
            return true;
            */
        }
    }
}