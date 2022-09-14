#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream File("4.txt");
    File << "eer32r3wr32r23r23r32rhu7i3r83hi383h3eihfh738rh38idf3h83nid3eh8ifu4hr38r3";
    File.close();
    string TextFile;
    ifstream NewFile("4.txt");
    string str;
    while (getline(NewFile, TextFile)) {
        str = TextFile;
    }
    int sizee = str.size();
    for (int i = 0; i < sizee; i++) {
        if (isdigit(str[i])) {
            cout << str[i];
        }
    }
    NewFile.close();
}