#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream File("5.txt");
    File << "qwertyuiopasdfghjklzxcvbnmmnbvcxzlkjhgfdsapoiuytrewqqaswdedgvgfnlkvrfeujyirfeujierf";
    File.close();
    string TextFile;
    ifstream NewFile("5.txt");
    string str;
    while (getline(NewFile, TextFile)) {
        str = TextFile;
    }
    int sizee = str.size();
    int a=0, b=0, c=0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
    for (int i = 0; i < sizee; i++) {
        if (str[i] == 'z') {
            z = z + 1;
        }
        else if (str[i] == 'a') {
            a = a + 1;
        }
        else if (str[i] == 'b') {
            b = b + 1;
        }
        else if (str[i] == 'c') {
            c = c + 1;
        }
        else if (str[i] == 'd') {
            d = d + 1;
        }
        else if (str[i] == 'e') {
            e = e + 1;
        }
        else if (str[i] == 'f') {
            f = f + 1;
        }
        else if (str[i] == 'g') {
            g = g + 1;
        }
        else if (str[i] == 'h') {
            h = h + 1;
        }
        else if (str[i] == 'i') {
            i = i + 1;
        }
        else if (str[i] == 'j') {
            j = j + 1;
        }
        else if (str[i] == 'k') {
            k = k + 1;
        }
        else if (str[i] == 'l') {
            l = l + 1;
        }
        else if (str[i] == 'm') {
            m = m + 1;
        }
        else if (str[i] == 'n') {
            n = n + 1;
        }
        else if (str[i] == 'o') {
            o = o + 1;
        }
        else if (str[i] == 'p') {
            p = p + 1;
        }
        else if (str[i] == 'q') {
            q = q + 1;
        }
        else if (str[i] == 'r') {
            r = r + 1;
        }
        else if (str[i] == 's') {
            s = s + 1;
        }
        else if (str[i] == 't') {
            t = t + 1;
        }
        else if (str[i] == 'u') {
            u = u + 1;
        }
        else if (str[i] == 'v') {
            v = v + 1;
        }
        else if (str[i] == 'w') {
            w = w + 1;
        }
        else if (str[i] == 'x') {
            x = x + 1;
        }
        else if (str[i] == 'y') {
            y = y + 1;
        }
    }
    for (int dd = 0; dd < a; dd++) {
        cout << 'a';
    }
    for (int dd = 0; dd < b; dd++) {
        cout << 'b';
    }for (int dd = 0; dd < c; dd++) {
        cout << 'c';
    }for (int dd = 0; dd < d; dd++) {
        cout << 'd';
    }for (int dd = 0; dd < e; dd++) {
        cout << 'e';
    }for (int dd = 0; dd < f; dd++) {
        cout << 'f';
    }for (int dd = 0; dd < g; dd++) {
        cout << 'g';
    }for (int dd = 0; dd < h; dd++) {
        cout << 'h';
    }for (int dd = 0; dd < i; dd++) {
        cout << 'i';
    }for (int dd = 0; dd < j; dd++) {
        cout << 'j';
    }for (int dd = 0; dd < k; dd++) {
        cout << 'k';
    }for (int dd = 0; dd < l; dd++) {
        cout << 'l';
    }for (int dd = 0; dd < m; dd++) {
        cout << 'm';
    }for (int dd = 0; dd < n; dd++) {
        cout << 'n';
    }for (int dd = 0; dd < o; dd++) {
        cout << 'o';
    }for (int dd = 0; dd < p; dd++) {
        cout << 'p';
    }for (int dd = 0; dd < q; dd++) {
        cout << 'q';
    }for (int dd = 0; dd < r; dd++) {
        cout << 'r';
    }for (int dd = 0; dd < s; dd++) {
        cout << 's';
    }for (int dd = 0; dd < t; dd++) {
        cout << 't';
    }for (int dd = 0; dd < u; dd++) {
        cout << 'u';
    }for (int dd = 0; dd < v; dd++) {
        cout << 'v';
    }for (int dd = 0; dd < w; dd++) {
        cout << 'w';
    }for (int dd = 0; dd < x; dd++) {
        cout << 'x';
    }for (int dd = 0; dd < y; dd++) {
        cout << 'y';
    }for (int dd = 0; dd < z; dd++) {
        cout << 'z';
    }
    NewFile.close();
}