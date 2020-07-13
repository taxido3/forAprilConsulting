#include <iostream>
using namespace std;

int main() {

	int i;

	cout << "please enter a number" << endl;
	cin >> i;
	cin.ignore();

	if (i % 3 == 0 && i % 4 == 0) {
		cout << "Coffee";
	}
	else if (i % 3 == 0) {
		cout << "Java";
	}
	else {
		cout << "match_missed";
	}
	return 0;
}