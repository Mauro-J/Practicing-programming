#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
	int cases;
	char word[10000];
	cin >> cases;
	
	cout << fixed << setprecision(2);
	while(cases-->0)
	{
		cin >> word;
		cout << (float)(strlen(word))/100 << endl;
	}
	return 0;
}