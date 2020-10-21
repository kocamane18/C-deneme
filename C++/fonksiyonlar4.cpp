#include <iostream>
using namespace std;

struct employee{
	int id;
	string name;
	string department;
};
// fonksiyonda de�eri de�i�tirdik ama main in alt�nda de�i�medi. de�i�mesini sa�lamak i�in pointer kullanmal�y�z.

/* void bilgiyazdir(employee mevki){
	mevki.id=10;
	cout << "Id:" << mevki.id << endl;
	cout << "Name:" << mevki.name << endl;
	cout << "Department:" << mevki.department << endl; 
}  */

void bilgiyazdir(employee* ptr){
	ptr->id=10;
	cout << "Id:" << ptr->id << endl;
	cout << "Name:" << ptr->name << endl;
	cout << "Department:" << ptr->department << endl;
}

int main() {
	employee sekreter={845, "Salih", "Yazilim"};
	bilgiyazdir(&sekreter);
	cout << sekreter.id << endl;
	
	sekreter.id=50;
	cout << sekreter.id << endl;
	
	cout << &sekreter;
	
	
	
	return 0;
}
