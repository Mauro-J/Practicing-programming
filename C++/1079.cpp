#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    float a,b,c;
    cin >> N;
    cout << fixed << setprecision(1);
    while(N) {
        cin >> a >> b >> c;
        cout << ((a*2)+(b*3)+(c*5))/10 << endl;
        N--;
    }
    return 0;
}
