#include <iostream>
using namespace std;

int main()
{
	int k  = 5, j = 7, l = 7;
	for(int i = 1; i <= 9; i += 2)
	{
		for(j = l; j >= k; j--)
		{
			cout << "I=" << i << " J=" << j << endl;
		}
		l += 2;
		k += 2;
	}

	return 0;
}
