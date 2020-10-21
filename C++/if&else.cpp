#include <iostream>
using namespace std;

int main() {
	string parola="Kedileriseverim";
	string input;
	
	cout << "Parola:"; cin >> input;    // cin komutu boþluða kadar olan yeri okuyor.
	
	if(input== parola ){
		cout << "Isleminiz yapiliyor...";
	}
	else{
		cout << "Hatali sifre girdiniz.";
	}
	
	
	
	return 0;
}
