#include <iostream>
using namespace std;

int main() {
	
	cout << " podaj wynik egzaminu ";
	int a = 49;
	int b = 59;
	int c = 84;
	int d = 99;
	int e = 100;
	
	int t;
	cin >> t;
	
	if(t < a) {cout << "ocena nie dostateczna"; }
	else if (t < b) {cout << "ocena dostateczna";} 
	else if (t < c) {cout << "ocena dobra";	}
	else if (t < d) {cout << "ocena bardzo dobra";	}
	else if(t = e) {cout << "ocena celujaca";	}
	else if(t > 100) {cout << "za durza wartosc";	}
	
	
	
	
	return 0;
}