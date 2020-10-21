#include <iostream>
using namespace std;

int main() {
	string parola="123adam123";
	string input;
	
	do{
		cout << "Sifre: ";
		cin >> input;
		if(input!=parola){
			cout << "Gecersiz sifre" << endl; 
		}
	}while(input!=parola);
	
	cout << "\nOturum aciliyor...";
	
	
	
	
	
	
	
	
	
	return 0;
}
