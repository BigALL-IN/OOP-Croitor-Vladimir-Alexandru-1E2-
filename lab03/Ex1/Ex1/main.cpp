#include "Math.h"
#include <iostream>
using namespace std;

int main()
{
	Math calcul;
	int x1, y1, z1;
	double x2, y2, z2;
	const char a = 'a', b = 'b';
	int count = 0;

	cin >> x1 >> y1 >> z1;
	cin >> x2 >> y2 >> z2;

	cout << calcul.Add(x1, y1) << " " << calcul.Add(x1, y1, z1) << " " << calcul.Add(x2, y2) << " " << calcul.Add(x2, y2, z2) << endl;
	cout << calcul.Mul(x1, y1) << " " << calcul.Mul(x1, y1, z1) << " " << calcul.Mul(x2, y2) << " " << calcul.Mul(x2, y2, z2) << endl;
	cout << calcul.Add(25, 50, 100, 50, 25) << endl;
	cout << calcul.Add(a, b);

}