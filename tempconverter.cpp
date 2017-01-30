#include <iostream>

using namespace std;

int main(){
	int menuChoice;
	double inTemp;
	double outTemp;

	cout << "CELSIUS AND FAHRENHEIT CONVERSION CALCULATOR\n";
	cout << "============================================================\n";
	cout << "(1) CELSIUS TO FAHRENHEIT (2) FAHRENHEIT TO CELSIUS (3) EXIT\n";
	cout << "input: ";
	cin >> menuChoice;

	switch (menuChoice) {
		case 1: {
			cout << "\n\nTEMPERATURE IN CELSIUS: ";
			cin >> inTemp;
			outTemp = inTemp * 1.8 + 32;
			cout << "TEMPERATURE IN FAHRENHEIT: " << outTemp;
			break;
		}
		case 2: {
			cout << "\n\nTEMPERATURE IN FAHRENHEIT: ";
			cin >> inTemp;
			outTemp = (inTemp - 32) * 5 / 9;
			cout << "TEMPERATURE IN CELSIUS: " << outTemp;
			break;
		}
		case 3: {
			break;
		}
	}
	return 0;
}
