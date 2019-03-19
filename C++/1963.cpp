#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double oldPrice, newPrice;
	cin >> oldPrice >> newPrice;

	cout << fixed << setprecision(2)
		 << ((newPrice - oldPrice) / oldPrice) * 100
		 << "%" << endl;
	return 0;
}