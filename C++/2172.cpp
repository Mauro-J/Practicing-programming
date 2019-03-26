#include <iostream>
using namespace std;

int main()
{
	int increase;
	int monsterEXP;
	while(cin >> increase >> monsterEXP && increase + monsterEXP)
	{
		cout << monsterEXP * increase << endl;
	}
	return 0;
}
