#include <iostream>
using namespace std;

int main()
{
	bool P, R;
	char caminho;
	cin >> P >> R;
	
	if(P == 1 && R == 1) caminho  = 'A';
	else if(P == 1 && R == 0) caminho = 'B';
	else if(P == 0) caminho = 'C';
	
	cout << caminho << endl;
	return 0;
}
