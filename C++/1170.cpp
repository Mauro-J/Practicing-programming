#include <iostream>
using namespace std;

int main()
{
	int n, dias;
	float x;

	cin >> n;
	for(; n > 0; n--)
	{
		cin >> x;
		dias = 0;
		while(x > 1)
		{
			x /= 2;
			dias++;
		}
		cout << dias << " dias" << endl;
	}

	return 0;
}
