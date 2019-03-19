#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
	int i, N, quantia, totalCoelhos = 0, totalRatos = 0, totalSapos = 0, total;
	char cobaias[3];
	cin >> N;
	for(i = 0; i < N; i++)
	{
		cin >> quantia >> cobaias;
		if(strcmp(cobaias, "C") == 0)
		{
			totalCoelhos += quantia;
		}
		else if(strcmp(cobaias, "R") == 0)
		{
			totalRatos += quantia;
		}
		else if(strcmp(cobaias, "S") == 0)
		{
			totalSapos += quantia;
		}
		total = totalCoelhos + totalRatos + totalSapos;
	}
	cout << fixed << setprecision(2);
	cout << "Total: " << total << " cobaias\n";
	cout << "Total de coelhos: " << totalCoelhos << "\n";
	cout << "Total de ratos: " << totalRatos << "\n";
	cout << "Total de sapos: " << totalSapos << "\n";
	cout << "Percentual de coelhos: " << (float)( totalCoelhos * 100 ) / total << " %" << endl;
	cout << "Percentual de ratos: " << (float)(totalRatos * 100) / total << " %" << endl;
	cout << "Percentual de sapos: " << (float)(totalSapos * 100) / total << " %" << endl;
	return 0;
}
