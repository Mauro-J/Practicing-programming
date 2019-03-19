#include <iostream>
using namespace std;

int main()
{
	string musicas[] = {"PROXYCITY",
						"P.Y.N.G.",
						"DNSUEY!",
						"SERVERS",
						"HOST!",
						"CRIPTONIZE",
						"OFFLINE DAY",
						"SALT",
						"ANSWER!",
						"RAR?",
						"WIFI ANTENNAS"
					   };
	int C, X, Y;
	cin >> C;

	while(C > 0)
	{
		cin >> X;
		cin >> Y;

		cout << musicas[X + Y] << endl;
		C -= 1;
	}

	return 0;
}
