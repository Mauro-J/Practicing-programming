#include <iostream>
using namespace std;

int main()
{
	int cases;
	cin >> cases;

	int multiple2 = 0, multiple3 = 0, multiple4 = 0, multiple5 = 0;
	while(cases--)
	{
		int multiple;

		cin >> multiple;
		if(multiple % 2 == 0)
		{
			multiple2++;
		}
		if(multiple % 3 == 0)
		{
			multiple3++;
		}
		if(multiple % 4 == 0)
		{
			multiple4++;
		}
		if(multiple % 5 == 0)
		{
			multiple5++;
		}

	}
	cout << multiple2 << " Multiplo(s) de 2" << endl
		 << multiple3 << " Multiplo(s) de 3" << endl
		 << multiple4 << " Multiplo(s) de 4" << endl
		 << multiple5 << " Multiplo(s) de 5" << endl;
	return 0;
}