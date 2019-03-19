#include <iostream>
using namespace std;

double crescimento(int population, double taxaCrescimento)
{
	double incrise = population + population * (taxaCrescimento / 100);
	return (int)incrise;
}
int main()
{
	int T;
	cin >> T;

	int PA, PB;
	double G1, G2;

	while(T)
	{
		cin >> PA >> PB;
		cin >> G1 >> G2;
		int i;
		for(i = 1;i<=100; i++)
		{
			PA = crescimento(PA, G1);
			PB = crescimento(PB, G2);
			if(PA > PB)
			{
				break;
			}
		}
		if(i > 100)
		{
			cout << "Mais de 1 seculo." << endl;
		}
		else
		{
			cout << i << " anos." << endl;
		}
		T--;
	}

	return 0;
}
