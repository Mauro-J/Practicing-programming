#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(1);

	int linhaMatriz;
	float M[12][12], Soma;
	char Operation;

	cin >> linhaMatriz;

	cin >> Operation;

	for(int i = 0; i <= 11; i++)
	{
		for(int j = 0; j <= 11; j++)
		{
			cin >> M[i][j];
			if(i == linhaMatriz)
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
		cout << Soma / 12 << endl;
	}

	return 0;
}
