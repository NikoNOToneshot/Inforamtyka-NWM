#include <iostream>
using namespace std;

int main() {
	short l1;
cout << "podaj pierwsza liczbe ";
	cin >> l1;
	
	short l2;
cout << "podaj druga liczbe ";
	cin >> l2;
	
	char znak;
	cout << "wybierz dzialanie (+, -, *, /)";
	cin >> znak;

	switch(znak) {
		case '+':
			cout << (l1 + l2) << endl;
		case '-':
			cout << (l1 - l2) << endl;
		case '*':
		    cout << (l1 * l2) << endl;
		case '/':
		    cout << (l1 / l2) << endl;
	}
	
	
	
	
	
	return 0;
}