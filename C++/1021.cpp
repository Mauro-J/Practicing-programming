#include <iostream>

using namespace std;

int main()
{
	double N;
	int resto;

	cin >> N;

	cout << "NOTAS:" << endl;

	cout << (int)N / 100 << " nota(s) de R$ 100,00" << endl;

	resto =  (int)N % 100;

	cout << resto / 50 << " nota(s) de R$ 50,00" << endl;

	resto = resto % 50;

	cout << resto / 20 << " nota(s) de R$ 20,00" << endl;

	resto = resto % 20;

	cout << resto / 10 << " nota(s) de R$ 10,00" << endl;

	resto = resto % 10;

	cout << resto / 5 << " nota(s) de R$ 5,00" << endl;

	resto = resto % 5;

	cout << resto / 2 << " nota(s) de R$ 2,00" << endl;

	resto = resto % 2;

	cout << "MOEDAS:" << endl;

	cout << resto / 1 << " moeda(s) de R$ 1.00" << endl;

	resto = N * 100;

	resto = resto % 100;

	cout << resto / 50 << " moeda(s) de R$ 0.50" << endl;

	resto = resto % 50;

	cout << resto / 25 << " moeda(s) de R$ 0.25" << endl;

	resto = resto % 25;

	cout << resto / 10 <<  " moeda(s) de R$ 0.10" << endl;

	resto = resto % 10;

	cout << resto / 5 << " moeda(s) de R$ 0.05" << endl;

	cout << resto / 1  << " moeda(s) de R$ 0.01" << endl;

	return 0;
}
