#include <iostream>

using namespace std;

int main()
{
	int i, N, ponto = 0, saltos = 0;
	char regiao[10];
	bool passar = true, barra;

	cin >> N;

	for(i = 0; i < N; i += 1)
	{
		cin >> regiao;

		if(regiao[1] == '.')
		{
			ponto++;

			cout << "pontos: " << ponto << endl;

			if(ponto > 2)
			{
				cout << "não pode passar" << endl;
				passar  = false;
			}
		}
		if(regiao[1] == '-')
		{
			cout << "teve barra" << endl;

			barra = true;
			if(ponto == 1)
			{
				saltos++;
				ponto = 0;
				cout << "pode passar" << endl << "saltos: " << saltos << endl;
			}
			else if(ponto == 2)
			{
				saltos++;
				ponto = 0;
				cout << "pode passar" << endl << "saltos: " << saltos << endl;
			}
		}

	}

	if(ponto == 1)
	{
		saltos++;
		ponto = 0;
		cout << "pode passar" << endl << "saltos: " << saltos << endl;
	}
	else if(ponto == 2)
	{
		saltos++;
		ponto = 0;
		cout << "pode passar" << endl << "saltos: " << saltos << endl;
	}

	if(passar)
	{
		cout << saltos << endl;
	}
	else
	{
		cout << "N" << endl;
	}
	return 0;
}
