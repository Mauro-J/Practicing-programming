#include <iostream>
using namespace std;

int main()
{
	string nome;
	int C, forca;
	cin >> C;
	while(C--)
	{
		cin >> nome >> forca;

		cout << (nome == "Thor" ? "Y" : "N") << endl;
	}
	return 0;
}
