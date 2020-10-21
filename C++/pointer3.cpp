#include <iostream>
using namespace std;

struct adres{
	string il;
	int plaka;
};

struct kisibilgi{
	string isim;
	int yas;
	adres* ptr;
};

int main() {
	kisibilgi muhendis={"Galip",21};
	adres a={"Giresun",28};
	muhendis.ptr = &a;
	cout << &a << endl;
	cout << muhendis.ptr << endl;
	
	kisibilgi* pointer = &muhendis;
	cout << pointer->ptr->il << endl;
	cout << pointer->ptr->plaka << endl;
	
	cout << pointer;
		
	return 0;
}
