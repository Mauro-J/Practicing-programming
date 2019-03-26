#include <iostream>
using namespace std;

int main()
{
	int tomadas, max = 0;
	for(int i = 4; i > 0; i--)
	{
		cin >> tomadas;
		max += tomadas;
	}
	cout << max - 3 << endl;
	return 0;
}
