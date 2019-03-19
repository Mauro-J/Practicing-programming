#include <iostream>

using namespace std;

int main()
{
	int N , x, y, z;

	cin >> N;

	x = 0;
	y = 1;
	for(; N > 0; N--)
	{
		if(N == 1)
		{
			cout << x;
		}
		else
		{
			cout << x << " ";
		}

		z = x + y;
		x = y;
		y = z;

	}
	cout << "\n";
	return 0;
}
