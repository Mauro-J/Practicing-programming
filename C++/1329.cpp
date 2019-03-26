#include <iostream>
using namespace std;

int main()
{
	int cases;
	while(cin >> cases && cases != 0)
	{
		int Mary = 0, John = 0;
		while(cases--)
		{
			int results;
			cin >> results;
			results == 0 ? Mary++ : John ++;
		}
		cout << "Mary won " << Mary << " times and John won " <<
			 John << " times" << endl;
	}
	return 0;
}
