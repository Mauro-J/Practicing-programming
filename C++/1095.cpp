#include <iostream>
using namespace std;
int main()
{
	int J = 1;
	for(int I = 60; I >= 0; I -= 5)
	{
		cout << "I=" << J << " J=" << I << endl;
		J = J + 3;
	}
	return 0;
}
