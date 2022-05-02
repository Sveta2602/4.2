//Lab_4.2.cpp
// < Яшиної Світлани >
// Лабораторна робота № 4.2
// Варіант 24

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = x;
		if (x <= -1)
			B = log(abs(cos(5 * x))) + exp(1 / x + x);
		else
			if (x > -1 && x < -0.4)
				B = sqrt(pow(2 - x, 3)) - sin(x) / cos(x);
			else
				B = sin(5 * x) - sqrt(abs(1 - x));
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}


