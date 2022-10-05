#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

HANDLE hConsole;

int main() {
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			for (int x = 0; x < 40; x++) {
				if (x < 8) {
					cout << "- ";
				}
				else {
					SetConsoleTextAttribute(hConsole, 4);
					cout << "X";
				}
			}
			cout << endl;
		}
		else if (i % 2 == 0 && i > 0 && i < 7) {
			for (int y = 0; y < 40; y++) {
				if (y < 8) {
					SetConsoleTextAttribute(hConsole, 7);
					cout << "* ";
				}
				else {
					SetConsoleTextAttribute(hConsole, 4);
					cout << "X";
				}
			}
			cout << endl;
		}
		else if (i % 2 == 1 && i > 0 && i < 6) {
			for (int y = 0; y < 40; y++) {
				if (y < 8) {
					SetConsoleTextAttribute(hConsole, 7);
					cout << "* ";
				}
				else {
					SetConsoleTextAttribute(hConsole, 7);
					cout << "X";
				}
			}
			cout << endl;
		}
		else if (i % 2 == 1 && i > 6) {
			for (int r = 0; r < 48; r++) {
				SetConsoleTextAttribute(hConsole, 7);
				cout << "X";
			}
			cout << endl;
		}
		else if (i % 2 == 0 && i > 6) {
			for (int r = 0; r < 48; r++) {
				SetConsoleTextAttribute(hConsole, 4);
				cout << "X";
			}
			cout << endl;
			SetConsoleTextAttribute(hConsole, 7);
		}
	}
	
}