#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int count = 1;
	long double capitalInicial, retorno;
	while(cin >> capitalInicial >> retorno)
	{
		retorno -= capitalInicial;
		retorno = (retorno * 100) / capitalInicial;
		cout << fixed << setprecision(2);
		cout << "Projeto " << count << ":" << endl
			 << "Percentual dos juros da aplicacao: "
			 << retorno << " %\n" << endl;
		count++;
	}
	return 0;
}
