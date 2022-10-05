#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string z;
    float x, y, A, H, R;
    //ofstream fin("4.txt");
    //fin << "я ничего25    не 10понимаю 2599в плюсах!\n";
    //fin.close();
    ifstream fout("4.txt");
    string fil, Textfile;
    while (getline(fout, Textfile))
    {
        fil = fil + "|" + Textfile;
    }
    fout.close();
    int siize = fil.size(), i = 0;
    bool fs = true;
    bool Befwasnotdig = false;
    for (i; i < siize; i++)
    {
        if (isdigit(fil[i]))
        {
            cout << fil[i];
            Befwasnotdig = true;
            fs = false;
        }
        else
        {
            if (fil[i] == ' ' && Befwasnotdig && not fs)
            {
                cout << " ";
                Befwasnotdig = false;
                fs = false;
            }
            else
            {
                fs = false;
                if (Befwasnotdig)
                {
                    cout << " ";
                    Befwasnotdig = false;
                }
            }
        }
        if (fil[i] == '|')
        {
            cout << "\n";
        }
    }
}