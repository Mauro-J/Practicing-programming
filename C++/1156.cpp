#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double S = 0, aux = 1;
    for(double i = 1; i <= 39; i += 2)
    {
        S = S + (i / aux);
        aux += aux;
    }
    cout << fixed << setprecision(2);
    cout << S << endl;
    return 0;
}
