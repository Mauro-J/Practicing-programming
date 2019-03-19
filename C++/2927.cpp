#include <iostream>
using namespace std;

int main()
{
	int Alunos, Comps, Caio, SCompl;

	cin >> Alunos >> Comps >> Caio >> SCompl;
	
	if((Comps - (Caio + SCompl)) < (Alunos + 1))
	{
		if(Caio > (SCompl/2))
		{
		cout << "Caio, a culpa eh sua!" << endl;
		}else{
		cout << "Igor bolado!" << endl;
		}	
	}else
	{
		cout << "Igor feliz!" << endl;
	}
	return 0;
}
