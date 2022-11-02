#include <iostream>
#include <string>
#include <vector>
using namespace std;


bool CheckTheThree(string num)
{
	for (int i = 0; i < num.length(); i++)
	{
		return (num[i] == num[i + 1]) && (num[i] == num[i + 2]) && (num[i] == num[i + 3]) ? false : true;
	}
}

bool CheckExisting(string num)
{
	vector<string> errorNums = {
		"","VX","VIV","VIIX","VIIV","VIIXL","IIIV","IIV","IIII","IIX","XIIII","XIIIIX",
		"XIIIIX","XXXX","LL","CLC","CLL","DLD","LDD","LLI","MMMCMXCX","AXX","LXA","XXIXX",
		"VVX","VXV","IVI","XLX","LCL","IVV","IXX","XLL","XCC","CDD","CMM","LXL","DCD",
		"MDXCLXIVIL","MDCILXIVIIX","MDMMCLXIVICI"
	};

	if (std::find(errorNums.begin(), errorNums.end(), num) != errorNums.end())
	{
		cout << "Ошибка, данное число не существует!" << endl;
		return false;
	}

	return true;
}

bool ToRimNumbers(string num, int arr[])
{
	for (int i = 0; i < num.length(); i++)
	{
		if (num[i] == 'I') arr[i] = 1;
		else if (num[i] == 'V') arr[i] = 5;
		else if (num[i] == 'X') arr[i] = 10;
		else if (num[i] == 'L') arr[i] = 50;
		else if (num[i] == 'C') arr[i] = 100;
		else if (num[i] == 'D') arr[i] = 500;
		else if (num[i] == 'M') arr[i] = 1000;
		else
		{
			cout << "Ошибка! Вводить только римские цифры!" << endl;
			return false;
		}
	}

	return true;
}

void main()
{
	setlocale(0, "");
	string rimNum;
	int rimskNums[20]{};
	cout << "Введите римские цифры: ";
	cin >> rimNum;

	if (!CheckTheThree(rimNum))
	{
		cout << "Ошибка, нельзя вводить число больше 3 раз!" << endl;
		return;
	}
	if (!CheckExisting(rimNum)) return;
	if (!ToRimNumbers(rimNum, rimskNums)) return;

	int sum = 0;
	for (int k = 1; k <= rimNum.length(); k++)
	{
		if ((rimskNums[k] == rimskNums[k + 1]) && (rimskNums[k] == rimskNums[k - 1]))
		{
			sum = sum + 3 * rimskNums[k];
			k = k + 2;
			continue;
		}

		if ((rimskNums[k - 1] >= rimskNums[k]))
		{
			sum = sum + rimskNums[k - 1] + rimskNums[k];
			k++;
		}
		else
		{
			sum = sum + abs(rimskNums[k - 1] - rimskNums[k]);
			k++;
		}
	}

	cout << "Число в арабской системе: " << sum << endl;
}