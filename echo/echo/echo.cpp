#include <iostream>
#include <string>
using namespace std;

int main() {
	string echo;
	cin >> echo;
	if (echo == "exit") {
		exit(100);
	}
	cout << echo;
}