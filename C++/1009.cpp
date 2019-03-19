#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string vendedor;
	double salarF,vendas,total;
	
	cin >> vendedor >> salarF >> vendas;

	
	total = salarF + (vendas * 0.15);
	cout << fixed << setprecision(2);
	
	cout << "TOTAL = R$ " << total << endl;
	
	return 0;
}
