#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double S, p, n, m;
	cout << "Enter S, m, n: ";
	cin >> S >> m >> n;
	if (S < 0 || n < 0)
	{
		cout << "Error!\n";
	}
	else
	{
		p = -100;
		double r = p / 100;
		double m1 = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));

		while ((S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) <= m) {
			p += 0.01;
			r = p / 100;
		}

		if (p > 0.1)
		{
			cout << "Percent: " << p - 0.01;
		}
		else
		{
			if (p < -0.0001)
			{

				cout << "Percent: " << p;
			}
			else
			{
				cout << "Percent: " << floor(p);
			}
		}
	}
}