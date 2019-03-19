#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(1);
	char Operation;

	cin >> Operation;

	double M[12][12], Soma = 0;

	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			cin >> M[i][j];
			if(j > i && (j + i) < 11)
			{
				Soma += M[i][j];
			}
		}
	}

	if(Operation == 'S')
	{
		cout << Soma << endl;
	}
	else if(Operation == 'M')
	{
		cout << Soma / 30.0 << endl;
	}

	return 0;
}