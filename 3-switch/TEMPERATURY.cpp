#include <iostream>
using namespace std;

int main() {
	float l1;
cout << "podaj temperature ";
	cin >> l1;
	

	
	char znak;
	cout << "K CZY F ";
	cin >> znak;

	switch(znak) {
		case 'k':
			cout << (l1 + 273.15) << endl;
		case 'f':
			cout << (l1 * 9 / 5 ) + 32 << endl;
		default:
			cout << "nwm zgadnij" << endl;
	}
	
	
	
	
	
	
	return 0;
}