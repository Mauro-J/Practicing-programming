#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int cases, Rafael, Beto, Carlos;
	cin >> cases;
	while(cases--)
	{
		int x, y;
		cin >> x >> y;
		Rafael = pow(3 * x, 2) + pow(y, 2),
		Beto = 2 * pow(x, 2) + pow(5 * y, 2),
		Carlos = -100 * x + pow(y, 3);
		if(Rafael > Beto && Rafael > Carlos) cout << "Rafael ganhou" << endl;
		else if(Beto > Rafael && Beto > Carlos) cout << "Beto ganhou" << endl;
		else if(Carlos > Rafael && Carlos > Beto) cout << "Carlos ganhou" << endl;
	}
	return 0;
}
