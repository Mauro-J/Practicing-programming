#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char frase[500];
	cin.getline(frase,500);
	cout << (strlen(frase) <= 80 ? "YES" : "NO") << endl;
	return 0;
}