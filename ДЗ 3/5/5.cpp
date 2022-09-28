#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string text;
    cin >> text;
    ofstream fout("none3.txt");
    fout << text;
    fout.close();
    text.clear();
    ifstream fin("none3.txt");
    while (!fin.eof()) {
        getline(fin, text);
        for (int j = 97; j < 123; j++)
        {
            for (int i = 0; i < text.size(); i++)
            {
                if ((int)text[i] == j) cout << text[i];
            }
        }
    }
}