#include <iostream>
using namespace std;

int main()
{
	double x;
	cin >> x;
	for(x = x + 1;; x++)
	{
		if((int)x % 2 == 0)
		{
			break;
		}
	}
	cout << x << endl;
	return 0;
}