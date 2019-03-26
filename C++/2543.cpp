#include <iostream>
using namespace std;

int main()
{
	int N, I, i, j;
	while(cin >> N >> I)
	{
		int CS = 0;
		while(N--)
		{
			cin >> i >> j;
			j == 0 && I == i ? CS++: 0 ;
		}
		cout << CS << endl;
	}
	return 0;
}
