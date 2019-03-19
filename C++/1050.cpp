#include <iostream>
using namespace std;

string DDD(int ddd)
{
	switch(ddd)
	{
	case 11:
		return "Sao Paulo";
		break;
	case 19:
		return "Campinas";
		break;
	case 21:
		return "Rio de Janeiro";
		break;
	case 27:
		return "Vitoria";
		break;
	case 31:
		return "Belo Horizonte";
		break;
	case 32:
		return "Juiz de Fora";
		break;
	case 61:
		return "Brasilia";
		break;
	case 71:
		return "Salvador";
		break;
	default:
		return "DDD nao cadastrado";
		break;
	}
}
int main()
{
	int ddd;
	cin >> ddd;
	cout << DDD(ddd) << endl;
	return 0;
}
