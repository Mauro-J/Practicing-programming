#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(1);
	char Operation;

	cin >> Operation;

	float M[12][12], Soma = 0;
	for(int i = 0; i <= 11; i++)
	{
		for(int j = 0; j <= 11; j++)
		{
			cin >> M[i][j];
			if(j > i)
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
		cout << Soma / 66 << endl;
	}

	return 0;
}