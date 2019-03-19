#include <iostream>
using namespace std;

int main()
{
	int num[15], par[5], impar[5], parPosition = 0, imparPosition = 0;
	for(int i  = 0; i < 15; i++)
	{
		cin >> num[i];
		if(num[i] % 2 == 0)
		{
			par[parPosition] = num[i];
			parPosition++;
			if(parPosition == 5)
			{
				for(int i = 0; i < 5; i++)
				{
					cout << "par[" << i << "] = " << par[i] << endl;
				}
				parPosition = 0;
			}
		}
		else
		{
			impar[imparPosition] = num[i];
			imparPosition++;
			if(imparPosition == 5)
			{
				for(int i = 0; i < 5; i++)
				{
					cout << "impar[" << i << "] = " << impar[i] << endl;
				}
				imparPosition = 0;
			}
		}
	}
	for(int i = 0; i < imparPosition; i++)
	{
		cout << "impar[" << i << "] = " << impar[i] << endl;
	}
	for(int i = 0; i < parPosition; i++)
	{
		cout << "par[" << i << "] = " << par[i] << endl;
	}
	return 0;
}
