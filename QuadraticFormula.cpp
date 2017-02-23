#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	double a, b, c, F, Fa, Ba, Sq, Sqa, Sqb;

	cout << "A? ";
	cin >> a;
	cout << "B? ";
	cin >> b;
	cout << "C? ";
	cin >> c;

	Ba = b * b;
	Sq = (Ba - 4 * (a) * (c));
	Sqb = abs(Sq);
	Sqa = sqrt(Sqb);
	F = (-b + Sqa) / (2 * a);
	Fa = (-b - Sqa) / (2 * a);

	if (F == Fa) {
		cout << "x = " << F << endl;
	}
	else {
		cout << "x1 = " << F << endl;
		cout << "x2 = " << Fa << endl;
	}
	string ans;
		cout << "Do you want to use this program again? (y/n)" << endl;
		cin >> ans;
		cout << endl;

		if (ans == "y") {
			main();
		}

	return 0;
}