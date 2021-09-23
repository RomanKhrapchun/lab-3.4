#include<iostream>

using namespace std;

int main()
{
	double x, y, x0, y0, R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	x0 = 0;
	y0 = 0;

	if ((x - x0) * (x - x0) + (y - y0) * (y - y0) >= R * R || y >= -R && y <= x)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}