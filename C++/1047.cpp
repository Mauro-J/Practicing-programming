#include <iostream>

using namespace std;
int main ()
{
	int hora, minuto, duracao[4];

	for(int i = 0; i < 4 ; i++)
	{
		cin >> duracao[i];
	}
	hora = ((duracao[2] - duracao[0]) + 24 ) % 24;
	minuto = duracao[3] - duracao[1];
	if(minuto < 0)
	{
		minuto += 60;
		hora--;
	}

	if(duracao[2] == duracao[0] && duracao[3] == duracao[1])
	{
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
	}
	else
	{
		cout << "O JOGO DUROU " << hora << " HORA(S) E " << minuto << " MINUTO(S)" << endl;
	}

	return 0;
}
