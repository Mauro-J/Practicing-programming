#include <iostream>
using namespace std;

int main()
{
	int cases;
	long long int N, M;
	char player1[100], player2[100], bet1[6], bet2[6];
	cin >> cases;
	while(cases--)
	{
		cin >> player1 >> bet1 >> player2 >> bet2 >> N >> M;
		if((N + M) % 2 == 0)
		{
			if(bet1[0] == 'P')
			{
				cout << player1 << endl;
			}
			else if(bet2[0] == 'P')
			{
				cout << player2 << endl;
			}
		}
		if((N + M) % 2 != 0)
		{
			if(bet1[0] == 'I')
			{
				cout << player1 << endl;
			}
			else if(bet2[0] == 'I')
			{
				cout << player2 << endl;
			}
		}
	}
	return 0;
}
