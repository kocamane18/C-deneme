#include <iostream>
using namespace std;

void selamla(){
	cout << "Merhaba" << endl;
}
// function overloading
void selamla(string name){
	cout << "Hosgeldin " << name << endl;
}

int main() {
/*	int a[]= {10,20,30,40};
	for(int item:a){  // elemanlarýn üzerinde dolaþýyor. // foreach döngüsü
		cout << item << endl;
	}
	*/
	
	selamla();
	selamla("Emin");
	return 0;
}
