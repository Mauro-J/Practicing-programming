#include <iostream>
using namespace std;

int main ()
{
	int X, Z, A, soma = 0;
	cin >> X;
	do
	{
		cin >> Z;
	}
	while(Z <= X);

	for(int i = X , A = 0 ;; i++ , A++)
	{
		soma += i;
		if(soma >= Z)
		{
			break;
		}
	}
	cout << A + 1 << endl;

	return 0;
}
