#include <iostream>
using namespace std;

int main()
{
	int N, A[3];
	while(cin >> N >> A[0] >> A[1])
	{
		int allow = 0;
		while(N--)
		{
			cin >> A[2];
			A[2] >= A[0] && A[2] <= A[1] ? allow ++ : 0;
		}
		cout << allow << endl;
	}
	return 0;
}
