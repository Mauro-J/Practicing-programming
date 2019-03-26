#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char text[500];
	cin.getline(text, 500);
	cout << ( strlen(text) <= 140 ? "TWEET" : "MUTE") << endl;
	return 0;
}