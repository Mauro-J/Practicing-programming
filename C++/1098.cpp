#include <iostream>
using namespace std;

int main()
{
	double k  = 3, l = 1, j;
	for(double i = 0; i <= 2; i += 0.2)
	{
		for(j = l; j <= k; j += 1)
		{
			cout << "I=" << i << " J=" << j << endl;
		}
		l += 0.2;
		k += 0.2;
	}
	return 0;
}
