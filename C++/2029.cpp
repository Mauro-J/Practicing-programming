#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double volume, diameter;
	cout << fixed << setprecision(2);
	while(cin >> volume >> diameter)
	{
		cout << "ALTURA = " << (volume / (3.14 * pow(diameter / 2,2))) << endl
		<< "AREA = " << (3.14 * pow(diameter / 2,2)) << endl;
	}
	return 0;
}
