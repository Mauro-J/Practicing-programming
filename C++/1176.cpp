#include <iostream>

using namespace std;

int main()
{
	int T; 
	long long int X, x, y, z, i;

	cin >> T;

	while(T)
	{
		cin >> X;

		x = 0;
		y = 1;
		i = 0;
		while(i < X)
		{
			z = x + y;
			x = y;
			y = z;

			i++;
		}

		cout << "Fib(" << X << ") = " << x << endl;

		T--;
	}

	return 0;
}
