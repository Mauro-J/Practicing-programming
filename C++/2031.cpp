#include <iostream>
using namespace std;

string winner(string sign1, string sign2)
{
	if (sign1 == "ataque" && sign2 == "ataque") return "Aniquilacao mutua";

	else if (sign1 == "pedra" && sign2 == "pedra") return "Sem ganhador";

	else if (sign1 == "papel" && sign2 == "papel") return "Ambos venceram";

	else if ((sign1 == "ataque" && (sign2 == "pedra" || sign2 == "papel")) || (sign1 == "pedra" && sign2 == "papel"))
		return "Jogador 1 venceu";

	else if ((sign2 == "ataque" && (sign1 == "pedra" || sign1 == "papel")) || (sign2 == "pedra" && sign1 == "papel"))
		return "Jogador 2 venceu";
}
int main()
{
	int cases;
	string sign1, sign2;
	cin >> cases;
	while(cases-- > 0)
	{
		cin >> sign1 >> sign2;
		cout << winner(sign1, sign2) << endl;
	}
	return 0;
}
