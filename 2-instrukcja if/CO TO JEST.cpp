#include <iostream>
using namespace std;

int main() {
   cout << "podaj swoją wagę";
    
	double waga; 
	cin >> waga;
	
	cout << "podaj swuj wzrost";
	double wzrost;
	cin >> wzrost;
	
	float bmi = waga / (wzrost * wzrost);
	

	cout << bmi << endl;
	
	
    return 0;
}