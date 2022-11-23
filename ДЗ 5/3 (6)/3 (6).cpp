#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string str;
    ifstream fin;
    fin.open("lorem.txt");
    getline(fin, str);
    istringstream iss(str);
    cout << "Слово минимальной длины: " << *min_element(istream_iterator<string>(iss),
        istream_iterator<string>(),
        [](const string& s1, const string& s2)
        {return s1.length() < s2.length(); });
    cout << endl;
}