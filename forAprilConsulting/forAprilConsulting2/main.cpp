#include <iostream>
using namespace std;




int main() {
	int* arr;
	int inCount = 0;
	int inInput = 0;
	int inInput2 = 0;
	int inSum = 0;


	cout << "Enter number\n";
	cin >> inInput;
	cin.ignore();

	arr = new int[inInput];

	for (int i = 1; i <= inInput; i++) {
		arr[i - 1] = i;
	}

	for (int i = 0; i < inInput; i++) {
		for (int k = 0; k <= inCount; k++) {
			cout << arr[k] << " ";
		}
		inCount++;
		cout << endl;
	}



	cout << "which row do you want to sum?\n";
	cin >> inInput;
	cin.ignore();

	for (int i = 0; i <= inInput; i++) {
		inSum = inSum + arr[i];
	}
	cout << "the Sum of the row " << inInput << "(starting with 0) is: ";
	for (int i = 0; i <= inInput; i++) {
		if (i < inInput) { cout << arr[i] << "+"; }
		else { cout << arr[i] << "="; }
	}
	cout << inSum << endl;



	inSum = 0;

	cout << "[1] sum of the even of this row\n[2] sum of the odd of this row\n";
	cin >> inInput2;
	cin.ignore();

	switch (inInput2) {
	case 1:
		for (int i = 0; i <= inInput; i++) {
			if (arr[i] % 2 == 0) {
				inSum = inSum + arr[i];
			}
		}
		cout << "sum of the even is: " << inSum << endl;
		break;
	case 2:
		for (int i = 0; i <= inInput; i++) {
			if (arr[i] % 2 != 0) {
				inSum = inSum + arr[i];
			}
		}
		cout << "sum of the odd is: " << inSum << endl;		
		break;
	default:
		cout << "invalid input\n";
	}

	return 0;
}
