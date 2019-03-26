#include <iostream>
using namespace std;

int main()
{
	int cases, bonus, Dabriel[4], Guarte[4];
	cin >> cases;
	while(cases--)
	{
		cin >> bonus;
		cin >> Dabriel[0] >> Dabriel[1] >> Dabriel[2];
		cin >> Guarte[0] >> Guarte[1] >> Guarte[2];
		Dabriel[3] = ((Dabriel[0] + Dabriel[1]) / 2) + ((Dabriel[2] % 2) == 0 ? bonus : 0);
		Guarte[3] = ((Guarte[0] + Guarte[1]) / 2) + ((Guarte[2] % 2) == 0 ? bonus : 0);
		if(Dabriel[3] > Guarte[3])
		{
			cout << "Dabriel" << endl;
		}
		else if(Guarte[3] > Dabriel[3])
		{
			cout << "Guarte" << endl;
		}
		else
		{
			cout << "Empate" << endl;
		}
	}
	return 0;
}
