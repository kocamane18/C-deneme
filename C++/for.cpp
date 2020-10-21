#include <iostream>
using namespace std;

int main() {
	cout << "-----Faktoriyel bulma islemi-----" << endl;
	int input;
	int faktoriyel=1;
	cout << "Sayi:"; cin >> input;
	
	for(int i=1 ; i<=input ; i++){
		faktoriyel*=i;
		cout << faktoriyel << endl;
	}
	
	cout << "\n";
	cout << input << " sayisinin faktoriyeli=" << faktoriyel;
	
	
	
	
	return 0;
}
