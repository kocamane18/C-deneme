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
	for(int item:a){  // elemanlar�n �zerinde dola��yor. // foreach d�ng�s�
		cout << item << endl;
	}
	*/
	
	selamla();
	selamla("Emin");
	return 0;
}
