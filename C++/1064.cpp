#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float num[6], soma;
	int i = 0, positivo = 0;
		
	while(i < 6){
		cin >> num[i];
		if(num[i] > 0){
			positivo ++;
			soma += num[i];
		}
		i++;
	}
	cout << positivo << " valores positivos" << endl;
	cout << fixed << setprecision(1);
	cout << soma / positivo << endl;
	return 0;
}