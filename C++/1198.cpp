#include <iostream>
using namespace std;

int main()
{
	long long int soldadosAliados, soldadosInimigos;
	while(cin >> soldadosAliados >> soldadosInimigos )
	{
		if(soldadosAliados < soldadosInimigos)
		{
			cout << soldadosInimigos - soldadosAliados << endl;
		}
		else
		{
			cout << soldadosAliados - soldadosInimigos << endl;
		}
	}
	return 0;
}
