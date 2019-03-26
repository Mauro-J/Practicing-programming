#include <iostream>
using namespace std;

int main()
{
	int cases, velocidades;
	while(cin >> cases)
	{
		int maior = 0;
		for(int i = 0; i < cases; i++)
		{
			cin >> velocidades;
			velocidades > maior ? maior = velocidades : maior = maior;
		}
		if(maior < 10) cout << 1 << endl;
		if(maior >= 10 && maior < 20) cout << 2 << endl;
		if(maior >= 20) cout << 3 << endl;
	}
	return 0;
}
