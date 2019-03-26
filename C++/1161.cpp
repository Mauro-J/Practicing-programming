#include <iostream>
using namespace std;

long long int fatorial(int num)
{
	long long int fatorial = 1;
	while (num > 0)
	{
		fatorial *= num;
		num --;
	}
	return fatorial;
}
int main()
{
	int M = 0, N = 0;
	while(cin >> M >> N)
	{
		cout << fatorial(M) + fatorial(N) << endl;
	}
	return 0;
}