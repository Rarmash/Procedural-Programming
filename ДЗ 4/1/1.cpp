#include <iostream>
#include <random>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    ofstream File("1.txt");
    for (int i = 1; i <= 10; i++) {
        File << rand() % 10;
    }
    File.close();
    int sum = 0;
    string i;
    ifstream NewFile("1.txt");
    string Line;
    NewFile >> i;
    for (int d = 0; d < 10; d++) {
        sum = sum + i[d];
        cout << d << "\t" << i[d] << "\t" << sum << endl;
    }
    cout << sum;
}