#include <iostream>
using namespace std;

int main() {
    int num[101],resposta[2];
    resposta[0] = 0;
    for (int i = 1; i <=100; i++) {
        cin >> num[i];
        if(num[i] > resposta[0]) {
            resposta[0] = num[i];
            resposta[1] = i;
        }
    }
    cout << resposta[0] << endl;
    cout << resposta[1] << endl;
    return 0;
}
