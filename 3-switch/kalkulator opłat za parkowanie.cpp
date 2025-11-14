#include <iostream>
using namespace std;

int main() {
	short s = 5;
	short m = 3;
	short a = 10;
	int b;
	cout << "ile godzin" << endl;
	cin >> b;
	

	
	char znak;
	cout << "s-samohud, m-motocykl, a-autobus ";
	cin >> znak;

	switch(znak) {
		case 's':
			cout << (s * b) << endl;
		case 'm':
			cout << (m * b) << endl;
		case 'a':
			cout << (a * b) << endl;
	}
	
	
	
	
	
	return 0;
}