#include <iostream>
using namespace std;

int main()
{
	int cases, vez = 1;
	while(cin >> cases)
	{
		int QNumeros = 1;
		QNumeros += ((cases * (cases + 1)) / 2);
		
		cout << "Caso " << vez++ << ": "
			 << QNumeros << " numero" << (cases == 0 ? "\n" : "s\n");

		cout << "0";
		for(int i = 1; i <= cases; i++)
		{
			for(int j = 1;j <= i; j++)
			{
				cout << " " << i;
			}
		}
		cout << endl << endl;
	}
	return 0;
}